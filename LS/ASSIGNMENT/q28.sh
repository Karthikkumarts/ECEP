#!/bin/bash
<<Documentation
Name        :KARTHIK KUMAR TS
Date        :18/10/2021
Description :WAS to locks down file permission for a particular directory
Sample I/P  :Before locking
             total 0
             -rw-rw-r-- 1 jatin jatin 0 Oct 18 10:10 a.txt  
             -rw-rw-r-- 1 jatin jatin 0 Oct 18 10:10 b.txt  
             -rw-rw-r-- 1 jatin jatin 0 Oct 18 10:10 c.txt  
Sample O/P  :After locking
             total 0
             -rw------- 1 jatin jatin 0 Oct 18 10:10 a.txt  
             -rw------- 1 jatin jatin 0 Oct 18 10:10 b.txt
             -rw------- 1 jatin jatin 0 Oct 18 10:10 c.txt  
Documentation
Dir=($1)
if [ $# -eq 0 ] #To check the input is passed through command line or not
then
    echo "Error:Please pass the directory in command line"
else
    if [ -d $Dir ] #To check the given input is directory or not
    then
       	chmod -R go-rw $1 #"chmod" used to change the mode of user,group,other
	ls -l $1 #To print the input which has changed through chmod
    fi
fi
