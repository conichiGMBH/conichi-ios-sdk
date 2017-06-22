fastlane documentation
================
# Installation

Make sure you have the latest version of the Xcode command line tools installed:

```
xcode-select --install
```

## Choose your installation method:

<table width="100%" >
<tr>
<th width="33%"><a href="http://brew.sh">Homebrew</a></td>
<th width="33%">Installer Script</td>
<th width="33%">Rubygems</td>
</tr>
<tr>
<td width="33%" align="center">macOS</td>
<td width="33%" align="center">macOS</td>
<td width="33%" align="center">macOS or Linux with Ruby 2.0.0 or above</td>
</tr>
<tr>
<td width="33%"><code>brew cask install fastlane</code></td>
<td width="33%"><a href="https://download.fastlane.tools">Download the zip file</a>. Then double click on the <code>install</code> script (or run it in a terminal window).</td>
<td width="33%"><code>sudo gem install fastlane -NV</code></td>
</tr>
</table>

# Available Actions
## iOS
### ios release
```
fastlane ios release
```

### ios download_frameworks
```
fastlane ios download_frameworks
```

### ios create_sample_project
```
fastlane ios create_sample_project
```

### ios update_changelog_from_release
```
fastlane ios update_changelog_from_release
```

### ios podspecs_version_bump
```
fastlane ios podspecs_version_bump
```

### ios podspecs_push
```
fastlane ios podspecs_push
```

### ios setup_new_release
```
fastlane ios setup_new_release
```
* Setups upcoming release

* Asks for next upcoming semantic version: path, minor, major

* Based on the input updates the project version in project plists

* Updates the changelog upcoming version

* Pushes the changes into the given develop branch

####Options

* **`develop_branch`** - develop branch name

* **`xcodeproject`** - xcodeproject name

* **`github_remote`** - the remote on the github in format 'conichiGMBH'


### ios put_upcoming_to_releases
```
fastlane ios put_upcoming_to_releases
```
Moves upcoming version from Changelog to releases


### ios get_changelog_data
```
fastlane ios get_changelog_data
```
Loads the HASH representation from the given YAML file.

If the file path is not given the '../CHANGELOG.yml' will be used.

####Options

* **`changelog_yaml_path`** - the relative path to the CHANGELOG.yml


### ios save_changelog_data
```
fastlane ios save_changelog_data
```
Saves the given changelog HASH into the CHANGELOG file at the given path.

If the file path is not given the '../CHANGELOG.yml' will be used.

####Options

* **`changelog_yaml_path`** - the relative path to the CHANGELOG.yml


### ios get_releases
```
fastlane ios get_releases
```
Gets the array of releases from the CHANGELOG file.


### ios get_upcoming
```
fastlane ios get_upcoming
```
Gets the upcoming release from the CHANGELOG file.


### ios get_upcoming_version
```
fastlane ios get_upcoming_version
```
Gets the upcoming version from the CHANGELOG file.


### ios get_upcoming_notes
```
fastlane ios get_upcoming_notes
```
Gets the upcoming notes from the CHANGELOG file.


### ios git_commit_shell
```
fastlane ios git_commit_shell
```
git commit -am 'message' where the 'message' is a required parameter

**`message`** - commit message


### ios git_add_all_shell
```
fastlane ios git_add_all_shell
```
git add .


### ios git_merge_branch
```
fastlane ios git_merge_branch
```
git merge 'source_branch' where the 'source_branch' is a required parameter.

####Options

* **`source_branch`** - source branch to be merged into current name


### ios git_checkout_branch
```
fastlane ios git_checkout_branch
```
git checkout 'destination_branch' where the 'destination_branch' is a required parameter.

####Options

* **`destination_branch`** - destination branch to be checked out


### ios git_branch_exists_on_remote
```
fastlane ios git_branch_exists_on_remote
```
Checks if the given 'branch' exists on the 'remote'.

####Options

* **`remote`** - git remote in format git@github.com:conichiGMBH/ios-fastlane.git

* **`branch`** - branch name


### ios git_status_clean?
```
fastlane ios git_status_clean?
```
Checks if current git status is clean.


### ios git_add_or_update_tag
```
fastlane ios git_add_or_update_tag
```
Creates or updates tag with the given name.

####Options

* **`branch`** - branch name with the future tag

* **`tag_name`** - tag name to be used

* **`remote`** - git remote in format git@github.com:conichiGMBH/ios-fastlane.git


### ios set_or_update_github_release
```
fastlane ios set_or_update_github_release
```
Creates or updates github release.

####Options

* **`release_name`** - release name

* **`description`** - release description

* **`repository_name`** - repositiry name in format 'conichiGMBH/ios-sdk'

* **`tag_name`** - tag name

* **`api_token`** - github api token

* **`upload_assets`** - array of paths to files to be uploaded and attached to the release

----

This README.md is auto-generated and will be re-generated every time [fastlane](https://fastlane.tools) is run.
More information about fastlane can be found on [fastlane.tools](https://fastlane.tools).
The documentation of fastlane can be found on [docs.fastlane.tools](https://docs.fastlane.tools).
