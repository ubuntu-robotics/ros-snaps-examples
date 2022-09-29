# ROS 2 components stage snap

Here we talk about [ROS 2 components feature](https://docs.ros.org/en/foxy/Tutorials/Intermediate/Composition.html).

The idea is to run from one snap the component from another one using the [`stage-snap`](https://snapcraft.io/docs/snapcraft-parts-metadata#stage-snaps) feature.

This example contains two snaps.
- The `listener` snap containing the `listener` component
- The `talker` snap containing the `talker` component and stage-snapping the listener snap.

## ros2_listener_component

The `ros2_listener_component` only contains the `listener` component

## ros2_talker_component

The `ros2_talker_component` contains the `talker` component as well as the `launchfile` loading the `talker` and the `listener` components.

The `listener` component is integrated into the `talker` snap via the [`stage-snap`](https://snapcraft.io/docs/snapcraft-parts-metadata#stage-snaps) feature of `snapcraft`.

## How to run the example

- In the file `ros2_listener_component/snap/snapcraft.yaml`, add a prefix (like your name) to the `name` of the snap (so your snap name is unique).
- In the file `ros2_listener_component/snap/snapcraft.yaml`, add the same prefix to the `name` and replace the name of the `stage-snap` with the name of the snap you decided for the listener. Give the `app` name the same name as the snap `name`.
- Build the `ros2_listener_component` snap and then upload it to the [snapstore](https://snapcraft.io/store).
- Build and intall the `ros2_talker_component` snap. Building this snap will include the `listener` component snap into our `talker` snap.
- From your terminal call `MY_PREDIX-ros2-talker-component`, and you will have a components `talker-listener` running.

The snap that you `stage-snaps` (here, `ros2-listener-component`) must be uploaded on the [snapstore](https://snapcraft.io/store).

The shared memory feature will raise an error (even though the talker-listener works). For more information regarding the shared-memory please visit the [ROS 2 shared memory in snaps documentation](https://snapcraft.io/docs/ros2-shared-memory-in-snaps).
