#! /bin/bash
#program to print pattern
for i in `seq 4` 
do
	for j  in `seq 1 $i` 
	do
	       	echo -n " $i "
	done
	echo
done
