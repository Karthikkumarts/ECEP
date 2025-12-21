#! /bin/bash
if [ -f $1 ]
then
    if [ -z $1 ]
    then
	len=`wc -l < $1`
	    var=`echo "(20/100)"|bc`
	    sed '$len*$var,d' $1
	fi
    fi

