#! /bin/bash
echo "$@"
var=($@)
a=${var[0]}
for i in ${var[*]}
do 
    if [ $a -ge $i ]
then 
    a=$a
else
    a=$i
fi
done 
echo $a
