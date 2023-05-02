#!/bin/bash

for i in user{1..2}
do
	sudo useradd -m $i -e 2023-05-03
	echo "user created: "$i
	echo "$i:123" | sudo chpasswd
	echo "password set"
done 
