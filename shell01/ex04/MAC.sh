#!/bin/sh
ifconfig -a ether | grep ether | cut -c 8- | rev | cut -c 2- | rev
