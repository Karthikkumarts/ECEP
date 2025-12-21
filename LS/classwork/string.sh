#! /bin/bash
#program to show use off string compare operater = and !=
#str1="hello"
#str2="hello"
read -p "enter 2 strings:" str1 str2
if [ ${str1} =  ${str2} ]
then
echo "strings match"
else
	echo "strings dont match"
fi
