#! /bin/bash
#program to show usage of string compare operater -z and -n
read -p "enter 2 strings:" str1 str2
if [ -z "${str1}" ]
then
	echo "str1 is empty"
else 
	echo "str1 is not empty"
fi
echo ":${str2}:"
if [ -n "$str2" ]
then
	echo "str2 is not empty"
else 
	echo "str2 is empty"
fi

