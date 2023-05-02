#!/bin/bash

echo -n "Enter name: "
read name

echo -n "Enter a number: "
read num

name=$name"_"$num".txt"

echo "Enter contents: "
cat > $name
