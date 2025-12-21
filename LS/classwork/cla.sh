#! /bin/bash
#program shows the usage of command line argument
# here we access positional arguments using $1, $2, $3 ...
echo "total no. of arguments : $#"
echo "program name : $0"
echo "1st argument : $1"
echo "2st argument : $2"
echo "3st argument : $3"
echo "4st argument : $4"
echo "list of command line arguments:$@"
echo "list of command line arguments:$*"
