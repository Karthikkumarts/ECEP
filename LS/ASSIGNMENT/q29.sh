<<DOCUMENTATION
NAME :KARTHIK KUMAR TS
DATE:25/10/21
DESCRIPTION :display the names of any file system which have less than 10% free space available
sample output : /dev/sda5/have less than 10% free space
DOCUMENTATION
#! /bin/bash
arr1=(`df -h |tr -s " "|cut -d " " -f1`)
arr=$((${#arr1[*]}-1))
arr2=(`df|tr -s " "|cut -d " " -f5| cut -d "%" -f1`)
for i in `seq 1 $arr`
do
if [ ${arr2[i]} -gt  90 ]
then
    echo "${arr1[i]} have less than 10% free space"
fi
done
