<<doc
NAME       : JAYABHARATHI J
DATE       : 
DESCRIPTION: WRITE A SCRIPT TO DELETE EMPTY LINES FROM A FILE
SAMPLE I/P : 1. ./07_delete_empty_lines.sh file.txt
Empty lines are deleted.
After this all empty lines must be deleted from given file.
2. ./07_delete_empty_lines.sh
Error: Please pass the file name through command line.

3. ./07_delete_empty_lines.sh file1.txt
Error : file1.txt is empty, So cannot delete the empty lines.
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -eq 1 ] #condition to check whether file name is pass through command line or not.
then
    if [ -f $1 ] #condition to check whether file name given in the command line is regular file or not.
    then
	if [ -s $1 ]  #condition to check whether the input file is empty or not.
	then
	    sed -i '/^[[:blank:]]*$/d' $1  #if content of input file is not empty then "sed" command is used to delete empty lines and empty lines with space and tab.
	    echo "Empty lines are deleted"
	    cat $1  #The "cat" used to show output after the deletion of empty files.
	else 
	    echo "file is empty"
	fi
    fi
else            #if input file is not pass through command line, it prints error message.
    echo "Error: Please pass the file name through command line."
fi
