#! /bin/bash
echo " total number of arguments:$#"
if [ -f $1 ]
then 
	echo " file exists"
else 
	echo " file does not exists"
fi
if [ -z $1 ]
then
	echo "file is empty"
else
	echo " file is non empty"
	head -2 $1

fi
