#!/bin/sh

echo "Making sure the listener is started"
while true
do
	$SNAP/opt/ros/humble/bin/ros2 node list | grep -xq "/listener" && break
	echo "Waiting for /listener node"
done
