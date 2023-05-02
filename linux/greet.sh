#!/bin/bash

echo -n "name: "
read name

h=$(date +%H)

if [ $h -lt 12 ]; then
	echo "Good morning, "$name
elif [ $h -lt 16 ]; then
	echo "Good afternoon, "$name
else 
	echo "Good evening, "$name
fi

