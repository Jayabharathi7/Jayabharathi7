<<doc
NAME       : JAYABHARATHI J
DATE       : 
DESCRIPTION: Read 'n' and generate a pattern given below( number increments from left to right)
SAMPLE I/P : Enter the number: 4
SAMPLE O/P : 1
             1 2
             1 2 3
             1 2 3 4
doc
#!/bin/bash
read -p "enter the number:" n  #Read number from user to print how many rows to print
for i in `seq $n`  #i is for row
do
    for j in `seq $i` #j is for column
    do
	echo -n "$j "  #Each iteration of inner "for" loop prints the each row	
    done
    echo     #this echo used to print the rows in next line,after completion of inner for loop
done
