<<doc
NAME       :
DATE       :
DESCRIPTION: FIBONACCI TERMS
SAMPLE I/P :
SAMPLE O/P :
doc


#!/bin/bash
read -p "enter the no:" n
a=0
b=1
x=1
while [ $x -lt $n ]
do
    echo -n "$a "
    i=$(($a+$b))
    a=$b
    b=$i
    x=$(($x+1))
done

