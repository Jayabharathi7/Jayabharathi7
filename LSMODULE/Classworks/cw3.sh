<<doc
NAME       :
DATE       :
DESCRIPTION: PRODUCT OF TWO GIVEN NUMBER IS ODD OR EVEN
SAMPLE I/P :
SAMPLE O/P :
doc



#!/bin/bash
read -p "enter the no a and b" a b
product=$(($a*$b))
rem=$(($product%2))
if [ $rem -eq 0 ]
then
    echo "no is even"
else
    echo "no is odd"
fi  

