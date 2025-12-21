#! /bin/bash
read n
for i in `seq $n` 
do
    for j in `seq $i`
    do
    echo -n "0 1"
done
done
