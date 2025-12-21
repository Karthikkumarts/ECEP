#! /bin/bash
#program for nested while loop
count=0
while [ $count -lt 4 ]
do
	echo "hello_$count "
	count=$((count+1))
done

