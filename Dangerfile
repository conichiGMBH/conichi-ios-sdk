modified_files = git.modified_files
pr_title = github.pr_title
declared_trivial = pr_title.include? "#trivial"

# Oi, CHANGELOGs please
if !declared_trivial && !git.modified_files.include?("CHANGELOG.yml")
  fail("No CHANGELOG changes made")
end

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
