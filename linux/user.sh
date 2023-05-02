#!/bin/bash

if [ $# -lt 1 ];then
	echo "No user specified"
	exit
fi
user=$1
log=0
for u in $(getent passwd | awk -F : '{print $1}')
do
	if [ "$user" == "$u" ];then
		echo "User logged in"
		log=1
	fi
done
if [ $log -eq 0 ];then
	echo "User not logged in"
fi
