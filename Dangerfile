modified_files = git.modified_files

# Oi, CHANGELOGs please
fail("No CHANGELOG changes made") if !git.modified_files.include?("CHANGELOG.yml")

# We would like to warn about modification in some files to pay more attention during the code review
danger_files_to_modify = ["Gemfile", "LICENSE", "README.md", "fastlane/Fastfile", ".gitmodules"]
danger_files_to_modify.each do |file|
  next if modified_files.grep(/#{file}/).empty?
  warn("#{file} modified")
end

# Ensure a clean commits history
if git.commits.any? { |c| c.message =~ /^Merge branch '#{github.branch_for_base}'/ }
  fail('Please rebase to get rid of the merge commits in this PR')
end
