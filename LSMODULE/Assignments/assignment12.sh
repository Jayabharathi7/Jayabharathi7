<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: WRITE SCRIPT TO PRINT CONTENTS OF FILE FROM GIVEN LINE NUMBER TO NEXT GIVEN NUMBER OF LINES
SAMPLE I/P :  1. ./17_print_lines.sh 5 3 myfile.txt
line number 5
line number 6
line number 7
2. ./17_print_lines.sh myfile.txt
Error: arguments missing!
Usage: ./file_filter.sh start_line
uptoline
For eg. ./20_file_filter.sh 5 5 <file>
filename
3. ./17_print_lines.sh 5 10 myfile.txt
Error: myfile.txt is having only 10 lines, file should have at least 14 lines.
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -eq 3 ]    #check whether no of arguments is equal to 3 or not.
then
    if [ -e $3 ]    #check whether file is exist or not.
    then
	x=`cat $3 | wc -l`  #if file is exist then it count the no of lines in input file.
	y=$(($1+$2-1))      #this expression is derived from arguments 1 and 2, and it assigned to variable "y".
	if [ $y -le $x ]    #if variable "y" is less than "x" then it shows output with respect input data given and input file.
	    then
              cat $3 | head -n $y | tail -n $2  #by using pipeline, head and tail command, the ouput is shown
	  else
	      echo "Error: data.txt is having only $x lines. file should have atleast $y lines" #if no of lines is less than "y" it prints error message.
	fi
    else
	echo "file not exist"
    fi
else
    echo "Error: arguments missing!"       #if no of arguments not equal to 3 then it prints error message.
    echo "Usage: ./file_filter.sh start_line upto_line filename"
    echo "For eg. ./file_filter.sh 5 5 <file>"
fi
