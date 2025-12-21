#! /bin/bash
echo -n "enter a string:"
read str
echo -n "enter how many times to print:"
read max_count
if [ -z ${str} ]
then
	echo "please enter non empty string"
	 exit #exit the program
fi
if [ $max_count -lt 0 ]
then
       	echo "please enter a +ve count"
	exit
fi
count=0
while [ $count -lt $max_count ]
do
	echo $str
	count=$((count + 1 ))
done
