#!/bin/sh
ifconfig | grep -i ether | awk '{print $2}'
