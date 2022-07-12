<<doc
NAME       :
DATE       :
DESCRIPTION: FACTORIAL OF A NUMBER
SAMPLE I/P :
SAMPLE O/P :
doc


#!/bin/bash
read -p "enter the no:" a
n=1
x=$a
while [ $a -gt $n ]
do
    x=$((($a-1)*$x))
    a=$(($a-1))
done
    echo "factorial value is $x"

