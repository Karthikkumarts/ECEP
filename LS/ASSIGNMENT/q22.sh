#! /bin/bash
if [ $# -gt 0 ]
then
    if [ -e $1 ]
    then
	echo " file exists"
	if [ -s $1 ]
	then
	    echo "file is non empty"
	    echo "1-lower to upper" 
	    echo "2-upper to lower"
	    read -p "enter a number:" n
	    case $n in
		1)
		    tr a-z A-Z < $1
		    ;;
		2)
		    tr A-Z a-z < $1
		    ;;
		*)
		    echo "please pass the correct command"
		    ;;
	    esac
	else
	    echo "ERROR:file is empty"
	fi
    else
	echo "ERROR:file doesnt exists"
    fi
else
    echo "pass the command line"
fi





