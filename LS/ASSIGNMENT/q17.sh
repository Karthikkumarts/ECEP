<<DOCUMENTATION
NAME          : KARTHIK KUMAR TS
DATE          : 13-10-2021
DESCRIPTION   : write a script to print content of file from given line number to next given number of lines.
SAMPLE (I/P)  : bash ass17.sh 5 3 FILE NAME
SAMPLE (O/P)  : line 5
                line 6
                line 7
DOCUMENTATION
#!/bin/bash
echo "entered arguments: $#"      # read the entered arguments
echo "name of the file is: $3"   
if [ $# -eq 0 ]                   # for counting the number of line arguments
then
   echo "please pass the filename in cmd line"
  exit
elif [ $# -eq 3 ]                 # checking the argument 3 or not
then
   if [ -f $3 ]                   # checking the file exist or not 
   then
      if [ -s $3 ]                # chechecking file have content or not
      then
	 len=`wc -l < $3`         # checking the length of the lines in files
	 n=$(($1+$2))             # checking the limit of argument
	 n2=$(($n-1))          
	if [ $n -gt $len ]        #check the file is greater than 5 lines
	then
	   echo "$3 having only $len lines,file should have atleast 14 lines"
       else
	  head -n $n2 $3 | tail -n $2   # printing the 5th line from the from the file
	fi
    else
echo "its an empty file"
      fi 
  else
      echo "its not a regular file"
   fi
   else
       echo -e "argument missing!\n./17.filefilter.sh start line upto line filename\nfor eg.17_filefilter.sh 5 5 <filez>"
fi
