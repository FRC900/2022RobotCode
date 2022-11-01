#!/bin/bash

until ntpstat; do
	echo "Waiting for time sync, previous rc = $?"
	sleep 1
done

