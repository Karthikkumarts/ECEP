#! /bin/bash
echo " total number of arguments:$#"
echo " list of arguments:$@"
if [ $# -gt 1 ]
then 
    if [ $# -ge 3 ]
    then
	case $2 in
	    +)
		sum=`echo "$1 + $3"|bc`
		echo " sum is $sum"
		;;
	    -)
		sub=`echo "$1 - $3"|bc`
		echo "sub is $sub"
		;;

	    x)
		mul=`echo "scale=2;$1 * $3"|bc`
		echo "mul is $mul"
		;;
	    /)
		div=`echo "scale=2;$1 / $3"|bc`
		echo " div is $div"
		;;
	esac
    else
	echo "ERROR:please pass 3 arguments"
    fi
else
    echo "ERROR:please pass the arguments through command line"
    exit
fi
