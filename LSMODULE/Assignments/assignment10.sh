<<doc
NAME       : JAYABHARATHI J
DATE       : 
DESCRIPTION: WRITE A SCRIPT TO RENAME A FILE/DIRECTORY REPLACED BY LOWER/UPPER CASE LETTERS
SAMPLE I/P :  Before running the script
$ ls
File.txt MyScript.SH MyFile007.txt dir/ Assign1/ newfolder/
$ ./14_file_upper_lower
Files are rename in lowercase and directories are renamed in upper case
$ ls
file.txt myfile007.txt myscript.sh DIR/ ASSIGN1/ NEWFOLDER/
SAMPLE O/P :
doc


#!/bin/bash
arr=(`echo *`) #all the contents in current working directory will be stored in array "arr".
for i in ${arr[@]}  #each and every file or directory is assigned to "i" for each iteration of "for" loop to rename.
do
    if [ -f $i ]  #condition to check whether it is file or not.
    then
	x=`echo $i | tr A-Z a-z` #if it is file, it will be renamed from upper to lower case.
        mv $i $x
    elif [ -d $i ]   #condition to check whether it is directory or not.
    then
	y=`echo $i | tr a-z A-Z`  #it it is directory, it will be renamed from lower to upper case.
        mv $i $y
    fi
done
