### Prepare
Make sure that you have the access token in `.bash_profile` on your MacBook with key `CONICHI_CI_GITHUB_TOKEN`.
Make sure that you are owner to the frameworks pods, because the release requires pushing pod specs.

### Release Public SDK
Run `bundle exec fastlane ios release`. This script is going to do the following things in order:
- Ensure there is no uncommitted changes.
- Fetch the latest release version from private SDK.
- Download the `.framework` files from the release of private SDK.
- Update the changelog according to the changelog of private SDK.
- Bump the `podspec` version number.
- Create a new tag and push it to remote.
- Push the `master` branch to remote.
- Create the sample project.
- Create a new release on GitHub.
- Push `podspec` file to remote.

### Troubleshotting
- Exit status of command `pod trunk push 'framework.podspec'`, you need to register with `pod trunk register name@example.org 'Your Name' --description='Your Description'`.
- `You are not allowed to push new versions for this pod`, you need to ask the owner of the pod to invite you.
