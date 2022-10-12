# Snap GitHub Action

To keep your deployment in sync with your developement, snaps can be built and published from a GitHub Action.

For this example, the GitHub Action will build and publish the [ros2-private-shared-memory](../shared_memory_foxy_core20/private-shared-memory/snap/snapcraft.yaml) snap example.

The result of see the results of this workflow in the [Action tab](https://github.com/ubuntu-robotics/ros-snaps-examples/actions/workflows/example_snap_github_action.yaml).

# GitHub Action
The GitHub Action file, here [`example_snap_github_action.yaml`](../.github/workflows/example_snap_github_action.yaml), must be placed in the [`.github/workflows`](../.github/workflows/) directory.

This GitHub workflow uses two Actions:
- [snapcore/action-build](https://github.com/snapcore/action-build): Action to build a snapcraft project
- [snapcore/action-publish](https://github.com/snapcore/action-publish): Action for publishing snaps

## Job: `build`

The first job: `build` can be triggered manually and is triggered automatically when pushing on `main`, openning a PR on `main` or on tagging.

Additionally the job make sure the built snap is installable and perform a basic test by calling the command.

Finally the job creates an artifact of the `.snap` so that it can be used by the next job. The artifact can also conveniently be downloaded from the GitHub interface.

## Job: `publish`

The `publish` job is triggered after the `build` job but only if the GitHub Action was triggered by a push on `main` or a tag.

The job starts by downloading the previously stored snap file.
Then the snap file is uploaded to the [snapstore](https://snapcraft.io/ros2-shared-memory).

The snap is published to a different [snapstore channel](https://snapcraft.io/docs/channels) depending if the current commit has been tagged (`candidate` channel) or not (`edge` channel).

# `STORE_LOGIN`

For the [snapcore/action-publish](https://github.com/snapcore/action-publish) to be authorized to publish to the snap store for you, you must give it the right permission.
This permission is given by a token that you can store in the `STORE_LOGIN` secret and then assign to the environement variable `SNAPCRAFT_STORE_CREDENTIALS`.

## Export the credential
You can export your credential from snapcraft cli by typing:

`snapcraft export-login --snaps=${YOUR_SNAP_NAME} --acls package_access,package_push,package_update,package_release exported.txt`

Make sure to replace `${YOUR_SNAP_NAME}` with the name of your snap. Here: `ros2-shared-memory`.

This command generate a file called `exported.txt` that contains the secret value we need to export in GitHub.

## Store the credential in GitHub
- In your GitHub project on [github.com](github.com) go to the "Settings" tab
- Under the "Security" section, expand "Secrets" and the select "Actions"
- Choose "New repository secret".
- Set the name to `STORE_LOGIN`, and paste the content of the `exported.txt` file as the value.
