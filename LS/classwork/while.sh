#! /bin/bash
count=0
while [ $count -lt 5 ]
do
       echo -n "hello-$count "
       count=$(($count+1))
done
