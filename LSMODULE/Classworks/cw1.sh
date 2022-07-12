<<doc
NAME       :
DATE       :
DESCRIPTION: LEAP YEAR OR NOT
SAMPLE I/P :
SAMPLE O/P :
doc


#!/bin/bash
echo "enter the year: "
read n
if [ `echo "$n%400" | bc` -eq 0 ]
then
    echo "its a leap year"
elif [ `echo "$n%100" | bc` -eq 0 ]
then
    echo "its not a leap year"
elif [ `echo "$n%4" | bc` -eq 0 ]
then
    echo "its leap year"
else
    echo "its not a leap year"
fi


