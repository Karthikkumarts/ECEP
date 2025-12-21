#! /bin/bash
echo "$@"
arr1=(`df -h |tr -s " "|cut -d " " -f1`)
arr=$((${#arr1[*]}-1))
fisys=(`df -h |tr -s " "|cut -d " " -f6`)
arr2=(`df|tr -s " "|cut -d " " -f5| cut -d "%" -f1`)
fiav=(`df -h |tr -s " "|cut -d " " -f4`)
for i in `seq 1 $arr`
do
if [ ${arr2[i]} -gt  90 ]
then
    echo "${arr1[i]} have less than 10% free space"
else
    echo "${arr1[i]} have less than 10% free space"
fi
done
