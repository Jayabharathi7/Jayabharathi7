<<doc
NAME       : JAYABHARATHI J
DATE       : 
DESCRIPTION: WRITE A SCRIPT TO PRINT THE LENGTH OF EACH AND EVERY STRING USING ARRAYS
SAMPLE I/P :  1. ./10_string_length.sh hello hai how are you ?
Length of string (hello) – 5
Length of string (hai) – 3
Length of string (how) – 3
Length of string (are) – 3
Length of string (you) – 3
Length of string (?) - 1
2. ./10_string_length.sh
Error : Please pass the arguments through command-line.
SAMPLE O/P :
doc


#!/bin/bash
arr=($@)    #all command line arguments assigned in array
if [ $# -ne 0 ] #condition to check whether arguments in command line present or not 
then
    for i in `seq 0 $(($#-1))`  #if "if" condition is true then the "for" loop will execute 
    do
	echo "length of string (${arr[i]}) - ${#arr[i]}"   #then it prints number of strings of particular arguments with respect to "i"
    done
else
    echo "Error: please pass the arguments through command line"  #if "if" condition is false then it will print error statement
fi
