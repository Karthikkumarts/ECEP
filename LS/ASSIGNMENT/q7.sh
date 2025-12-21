#! /bin/bash
echo "list of argument:$@"
if [ $# -gt 0 ]
then
    if [ -e $1 ]
    then
	sed -i '/^[[:blank:]]*$/d' $1
	echo "empty lines deleted"
    else
	echo "ERROR:file doesnt exists"
    fi
else
    echo "ERROR: please pass command line"
fi 
