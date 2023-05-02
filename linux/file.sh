#!/bin/bash

echo -n "name : "
read name

echo -n num: 
read num

name=$name"_"$num

echo "Contents : (CTRL+D)"
cat > $name

echo "5Lines"
head -n 5 $name
