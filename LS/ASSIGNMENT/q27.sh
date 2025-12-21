<<DOCUMENTATION
NAME :KARTHIK KUMAR TS
DATE:25/10/21
DESCRIPTION : Write a script that any number of direction as command line arguments and then lists the content of each of these directories
sample input : ~/ecep
sample output: /home/user:
               Downloads Desktop music pictures public vedios

DOCUMENTATION
#! /bin/bash
if [ $# -ge 1 ] #<...if length of argument is 1 then continue other wise print the list of current directory
then
    for i in $@
    do
   if [ -d $@ ] #<...checks if the directory is exists or not
   then
       cd
  echo * #<...prints the conents of directory
else 
    echo "ERROR: directory doesnt exists"
   fi
done
else 
    echo *
fi
       

