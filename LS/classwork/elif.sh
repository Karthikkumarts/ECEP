#! /bin/bash
read -p "enter a number:" NUM
if [ $NUM -gt 1 ]
then
	echo "$NUM is +ve"
elif [ $NUM -lt 1 ]
then
	echo "$NUM is -ve"
fi 
echo "done"

