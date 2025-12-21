#! /bin/bash
for i in `seq 5`
do
	echo -n "hello-$i "
	for j  in `seq 4`
	do
	       	echo -n " hello-$j"
	done
	echo 
done
