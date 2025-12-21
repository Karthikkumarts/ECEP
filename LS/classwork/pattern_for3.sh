#! /bin/bash
#program to print pattern
for i in `seq 4 -1 1` 
do
	for j  in ` seq $i`
	do
	       	echo -n "* "
	done
	echo
done
