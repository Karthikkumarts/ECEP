#! /bin/bash
echo "length of arguments:$#"
echo "list of arguments:$@"
length=$#
if [ $# -gt 0 ]
then
    len=$((length-1))
    opr=${len:0:1}
    case $opr in
	-a)
	    for i in `seq $len` 
	    do
		var=`sort -n $@`
		echo "$var"
	    done
	    ;;
	-d)
	    for i in `seq $len`
	    do
		var=`sort -nr $@`
		echo "$var"
	    done
	    ;;
	*)
	    echo "please pass -a/-d"
	    ;;
    esac 
else
    echo "pass through command line"
fi
