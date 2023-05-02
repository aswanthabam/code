#!/bin/bash

echo "enter: "
read file

if [ -f $file ];then
	echo "file exists"
	echo "contents of file is: "
	cat $file
else 
	echo "file doesnt exist"
	echo "creating file type content and ctrl+d"
	cat > $file
fi

