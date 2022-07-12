<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: WAS TO PRINT CONTENTS OF A DIRECTORY WITHOUT LS COMMAND
SAMPLE I/P :  Let assume your pwd is /home/user/ECEP/Linux_Systems/
1. ./27_output_ls.sh
Assignments Classwork
2. ./27_ouput_ls.sh ~ ~/ECEP
/home/user:
Downloads Documents Desktop Music Pictures Public Videos
ECEP
/home/user/ECEP:
Linux_Systems Advnc_C Linux_Internals Data_Structures MC
3. ./27_ouput_ls.sh Test
28_output_ls.sh: Cannot access ‘Test’ : No such a file or
directory.
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -ne 0 ] #condition to check whether argument is given in command line or not.
then
for i in $@     #making loop for printing contents with respect to each path given in command line.
do
    if [ -d $i ]  #condition to check whether given path is for directory or not.
    then
	cd $i      #change the directory to given path.
	pwd        #using "pwd" command to show present working directory for every iteration. 
	echo *     #the "echo *" prints the contents of present working directory with respect to path.
    else
	echo "$i is not a directory"
    fi
done
else             #if arguments are not given in command line, it prints the contents of present working directory.
    echo *
fi
