#! /bin/bash
#program to print pattern
for i in `seq 4`
do
    for j  in `seq 1  $i`
    do
	sum=$((sum+1))
	echo -n "$sum"
    done
    echo 
done                     
