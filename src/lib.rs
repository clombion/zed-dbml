// src/lib.rs
use zed_extension_api::{self as zed, LanguageServerId, Result};
use std::fs;

const SERVER_ID: &str = "dbml-language-server";
const GITHUB_REPO: &str = "clombion/dbml-language-server";

struct DbmlExtension;

impl zed::Extension for DbmlExtension {
    fn new() -> Self {
        Self
    }

    fn language_server_command(
        &mut self,
        language_server_id: &LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<zed::Command> {
        if language_server_id.as_ref() != SERVER_ID {
            return Err(format!("Unsupported language server: {}", language_server_id.as_ref()));
        }

        // Try to find the server in PATH first
        if let Some(path) = worktree.which(SERVER_ID) {
            return Ok(zed::Command {
                command: path,
                args: vec![],
                env: Default::default(),
            });
        }

        // Download and install the server
        zed::set_language_server_installation_status(
            language_server_id,
            &zed::LanguageServerInstallationStatus::Downloading,
        );

        let release = zed::latest_github_release(
            GITHUB_REPO,
            zed::GithubReleaseOptions {
                require_assets: true,
                pre_release: false,
            },
        )?;

        let (platform, arch) = zed::current_platform();
        
        let asset_name = match (platform, arch) {
            (zed::Os::Mac, zed::Architecture::Aarch64) => {
                "dbml-language-server-aarch64-apple-darwin.tar.gz"
            }
            (zed::Os::Mac, zed::Architecture::X8664) => {
                "dbml-language-server-x86_64-apple-darwin.tar.gz"
            }
            (zed::Os::Linux, zed::Architecture::X8664) => {
                "dbml-language-server-x86_64-unknown-linux-musl.tar.gz"
            }
            (zed::Os::Windows, zed::Architecture::X8664) => {
                "dbml-language-server-x86_64-pc-windows-msvc.zip"
            }
            _ => return Err(format!("Unsupported platform: {:?}-{:?}", platform, arch)),
        };

        let asset = release
            .assets
            .iter()
            .find(|asset| asset.name == asset_name)
            .ok_or_else(|| format!("No matching asset found for {}", asset_name))?;

        let version_dir = format!("dbml-lsp-{}", release.version);
        let binary_path = format!("{}/{}", version_dir, SERVER_ID);

        // Check if binary already exists using std::fs
        if !fs::metadata(&binary_path).is_ok() {
            let file_type = if asset_name.ends_with(".zip") {
                zed::DownloadedFileType::Zip
            } else {
                zed::DownloadedFileType::GzipTar
            };

            zed::download_file(
                &asset.download_url,
                &version_dir,
                file_type,
            )?;

            // Make the binary executable
            zed::make_file_executable(&binary_path)?;
        }

        zed::set_language_server_installation_status(
            language_server_id,
            &zed::LanguageServerInstallationStatus::CheckingForUpdate,
        );

        Ok(zed::Command {
            command: binary_path,
            args: vec![],
            env: Default::default(),
        })
    }
}

zed::register_extension!(DbmlExtension);
