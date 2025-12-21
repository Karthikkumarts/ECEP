#! /bin/bash
read -p "Enter 2 numbers:" NUM1 NUM2 #read is used to take user input
if [ $NUM1 -gt $NUM2 ]
then 
	echo "$NUM1 > $NUM2"
else
	echo "$NUM1 < $NUM2"
fi 
echo "done"

