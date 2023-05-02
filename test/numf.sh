#!/bin/bash

echo "enter: "
read num

if [ $(find ./ -type f | wc -l) -ge $num ];then
	echo "The folder contains fo of files greater than $num"
else 
	echo "NO"
fi
