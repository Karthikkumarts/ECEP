#! /bin/bash
#program show the usage of using seq to generate a range
#using a for loop to iterate over a range
read -p "enter the n value :" n
range=`seq 1 $n`
#iterate over range 1 2...10
for i in $range
do 
	echo $i
done
	echo "OR"
	for i in `seq $n`
	do 
		echo "$i"
	done
