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
if [ $max_count -gt 0 ]
then
for i in `seq $max_count`
do
    echo "$str - $i"
done
else
       	echo "please enter a +ve count"
fi
