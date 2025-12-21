#! /bin/bash
arr=(`df -h|tr -s " "|cut -d " " -f 5`)
echo "${arr[*]}"
