#!/bin/bash

echo -n "Number: "
read num

if [ $num -lt 0 ]; then
	echo "negative"
elif [ $num -eq 0 ];then
	echo "zero"
else 
	echo "+ve"
fi
