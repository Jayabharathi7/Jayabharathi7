<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: USE A RECURSIVE FUNCTION TO PRINT EACH ARGUMENT PASSED TO THE FUNCTION
SAMPLE I/P :  1. ./25_recursion.sh How are you? I am fine
How
are
you?
I
am
fine

2. ./25_recursion.sh
Error : Pass the arguments through command line.
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -ne 0 ] #condition to check whether argument is given in command line or not.
then
    function recursion()  #function is created as "recursion".
    {
	arr=($@)         #all the arguments given in command line is assigned to array "arr".
	echo "$1"        #it prints the first argument.
	if [ $# -ne 1 ]  #condition to check whether no of arguments is not equal to one or not.
	then
	    recursion ${arr[@]:1} #if the condition is true, it makes function call with arguments starting from index "1" by offset method.
	else
	    exit  #if condition fails,it will get terminated.
	fi
    }
recursion $@  #after checking whether arguments in the command line, this line will be executed and it initially call "recursion" function with all the arguments. 
else
    echo "Error : Pass the arguments through command line." #if command line arguments are not given it prints error message.
fi
