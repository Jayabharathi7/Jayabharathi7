<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: WRITE A SCRIPT TO PRINT CHESS BOARD
SAMPLE I/P : CHESS PATTERN
SAMPLE O/P :
doc


#!/bin/bash
for row in `seq 8`    #the outer "for" loop has 8 iteration
do
    for column in `seq 8`    #the inner "for" loop has 8 iteration
    do
	if [ $(($(($row+$column))%2)) -eq 0 ]  #this condition checks the addition of row and column value is even or odd
	then
	    echo -e -n "\e[47m" " "     #if condition is true it prints white colour
	else
	    echo -e -n "\e[40m" " "     #if condition is false it prints black colour  
	fi
    done
    echo -e "\e[0m" " "       #after every termination of inner "for" loop it prints normal colour
done
