// src/lib.rs

use zed_extension_api::{
    self as zed,
    anyhow::{anyhow, Result},
    LanguageServerId,
};

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
    ) -> Result<zed::LanguageServerCommand> {
        if language_server_id.as_ref()!= SERVER_ID {
            return Err(anyhow!("Unsupported language server: {}", language_server_id.as_ref()));
        }

        // 1. Determine the path where the binary should be installed.
        let server_path = worktree.data_dir().join(SERVER_ID).join(SERVER_ID);

        // 2. Check if the binary is already installed. If so, we're done.
        if server_path.exists() {
            return Ok(zed::LanguageServerCommand {
                command: server_path.to_string_lossy().to_string(),
                args: vec!,
                env: Default::default(),
            });
        }

        // 3. If not installed, inform Zed that we are starting the download.
        zed::set_language_server_installation_status(
            language_server_id,
            &zed::LanguageServerInstallationStatus::Downloading,
        );

        // 4. Fetch the latest release information from the GitHub repository.
        let release = zed::latest_github_release(
            GITHUB_REPO,
            zed::GithubReleaseOptions {
                require_assets: true,
                pre_release: false,
            },
        )?;

        // 5. Determine the user's platform and find the matching release asset.
        let (platform, arch) = zed::current_platform();
        let asset_name = match (platform, arch) {
            (zed::Os::Mac, zed::Architecture::Aarch64) => "dbml-lsp-aarch64-apple-darwin.tar.gz",
            (zed::Os::Mac, zed::Architecture::X8664) => "dbml-lsp-x86_64-apple-darwin.tar.gz",
            (zed::Os::Linux, zed::Architecture::Aarch64) => "dbml-lsp-aarch64-unknown-linux-gnu.tar.gz",
            (zed::Os::Linux, zed::Architecture::X8664) => "dbml-lsp-x86_64-unknown-linux-gnu.tar.gz",
            (zed::Os::Windows, zed::Architecture::X8664) => "dbml-lsp-x86_64-pc-windows-msvc.zip",
            _ => return Err(anyhow!("Unsupported platform: {:?}-{:?}", platform, arch)),
        };

        let asset = release
          .assets
          .iter()
          .find(|asset| asset.name == asset_name)
          .ok_or_else(|| anyhow!("No matching asset found for platform"))?;

        // 6. Download the compressed archive to a temporary path.
        let download_path = worktree.data_dir().join(SERVER_ID).join(&asset.name);
        
        let file_type = if asset.name.ends_with(".zip") {
            zed::DownloadedFileType::Zip
        } else {
            zed::DownloadedFileType::Gzip
        };

        zed::download_file(&asset.download_url, &download_path, file_type)?;

        // 7. Make the final binary executable.
        zed::make_file_executable(&server_path)?;

        // 8. Inform Zed that the installation is complete.
        zed::set_language_server_installation_status(
            language_server_id,
            &zed::LanguageServerInstallationStatus::Finished,
        );

        // 9. Return the command to run the newly installed server.
        Ok(zed::LanguageServerCommand {
            command: server_path.to_string_lossy().to_string(),
            args: vec!,
            env: Default::default(),
        })
    }
}

zed::register_extension!(DbmlExtension);
