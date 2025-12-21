#! /bin/bash
#program shows the usage of cla
#her we access arguments by iterating over $@
echo "total no. of arguments : $#"
echo "argument list :$@" #commonly used
echo "argument list :$*"

#iterate over arguments ($@)
for ARG in $@
do
	echo $ARG
done
