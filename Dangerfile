# Look for prose issues in markdown files
prose.lint_files

# Look for spelling issues in markdown files
prose.ignored_words = ["antondomashnev", "conichi", "CocoaPods", "Carthage"]
prose.check_spelling

# Oi, CHANGELOGs please
fail("No CHANGELOG changes made") if !git.modified_files.include?("CHANGELOG.yml")

# This comes from `./danger_plugins/protect_files.rb` which is automatically parsed by Danger
files.protect_files(path: "Gemfile", message: "Gemfile modified", fail_build: false)
files.protect_files(path: "LICENSE", message: "LICENSE modified", fail_build: false)
files.protect_files(path: "README.md", message: "README modified", fail_build: false)
files.protect_files(path: "fastlane/Fastfile", message: "Fastfile modified", fail_build: false)
files.protect_files(path: "fastlane/.env", message: "Fastlane env modified", fail_build: false)
files.protect_files(path: "fastlane/Pluginfile", message: "Fastlane Pluginfile modified", fail_build: false)
files.protect_files(path: ".gitignore", message: "gitignore modified", fail_build: false)

# Ensure a clean commits history
if git.commits.any? { |c| c.message =~ /^Merge branch '#{github.branch_for_base}'/ }
  fail('Please rebase to get rid of the merge commits in this PR')
end
