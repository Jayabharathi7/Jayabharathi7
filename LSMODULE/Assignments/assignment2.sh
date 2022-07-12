<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: READ 'n' AND GENERATE A PATTERN GIVEN BELOW(NUMBER INCREASING FROM TOP TO BOTTOM)
SAMPLE I/P : Enter the number: 4
SAMPLE O/P : 1
             2 3
             4 5 6
             7 8 9 10
doc


#!/bin/bash
read -p "enter the number:" n #Read the number from user to print how many rows
count=1                       #initialize count is equal to 1
for i in `seq $n`             #i for rows
do
    for j in `seq $i`         #j for coloumns
    do
	echo -n "$count "     #every iteration of inner "for" loop print each row with respect to value of count
	count=$(($count+1))   #count will be incremented for every execution of inner "for" loop
    done
    echo                      #this echo used to print in new line
done
