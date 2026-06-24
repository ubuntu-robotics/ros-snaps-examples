# ROS 2 Jazzy talker/listener with Zenoh

This example demonstrates a ROS 2 `demo_nodes_cpp` talker/listener pair using
[`rmw_zenoh_cpp`](https://github.com/ros2/rmw_zenoh) as the middleware, which
replaces DDS entirely.

Two modes are provided:

| Mode | Apps | Router required |
|------|------|-----------------|
| Without router | `talker`, `listener` | No — peer discovery via multicast scouting |
| With router | `talker-router`, `listener-router` | Yes — `zenohd` |

## How to generate the snap

```console
snapcraft
```

## How to install the snap

```console
sudo snap install ros2-jazzy-talker-listener-zenoh_*.snap --dangerous
```

## How to run — without router

Peer discovery uses multicast scouting; both commands must run on the same host.

```console
# terminal 1
ros2-jazzy-talker-listener-zenoh.talker

# terminal 2
ros2-jazzy-talker-listener-zenoh.listener
```

## How to run — with router

A Zenoh router must be running before starting the nodes. Install and start the
`zenohd` snap first:

```console
sudo snap install zenohd
sudo snap start zenohd
```

Then, in separate terminals:

```console
# terminal 1
ros2-jazzy-talker-listener-zenoh.talker-router

# terminal 2
ros2-jazzy-talker-listener-zenoh.listener-router
```
