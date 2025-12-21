#! /bin/bash
num=5
k=5
for i in `seq $num` 
do
    for j  in `seq $i`
    do
	echo -n " " 
    done
    for k in `seq $k`
    do
	echo -n "*"
	k=`expr $k - 1` 
    done
    echo  
done


