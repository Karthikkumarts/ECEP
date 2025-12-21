#! /bin/bash
read -p "enter the number:" num
var='^[+-]?[0-9.]+$'
if [[ $num =~ $var ]]
then 
    echo " yes it is a number"
else
    echo "no it is not a number"
fi

