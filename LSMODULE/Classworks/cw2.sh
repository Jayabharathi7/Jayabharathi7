<<doc
NAME       :
DATE       :
DESCRIPTION: CHECH THE FIRST IS A MULTIPLE OF THE SECOND
SAMPLE I/P :
SAMPLE O/P :
doc


#!/bin/bash
read -p "enter the first no: " a
read -p "enter the second no: " b
if [ `echo "$a%$b" | bc` -eq 0 ]
then
    echo "yes first is multiple of second"
else
    echo "no first is not multiple of second"
fi

