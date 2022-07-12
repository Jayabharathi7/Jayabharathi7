<<doc
NAME       :
DATE       :
DESCRIPTION: SCRIPT TO FIND SUM OF DIGITS OF A NUMBER
SAMPLE I/P :
SAMPLE O/P :
doc


#!/bin/bash
read -p "enter the no:" a
sum=0
while [ $a -gt 0 ]
do
 m=$(($a%10))
 sum=$(($sum+$m))
 a=$(($a/10))
done
echo "sum of digits $sum"


