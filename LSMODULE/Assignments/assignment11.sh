<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: GIVEN ALBUM NAME AND CORRESPONDING DIRECTORY, THIS SCRIPTS RENAMES THE JPG FILES WITH NEW NAME PASSED THROUGH COMMAND LINE
SAMPLE I/P :  Before executing the script
$ ls
DSN001.jpg DSN002.jpg DSN003.jpg DSN004.jpg DSN005.jpg
./16_rename_album.sh day_out
All .jpg files in current directory is renamed as
day_out001.jpg day_out002.jpg day_out003.jpg day_out005.jpg day_out004.jpg
./16_rename_album.sh
Error : Please pass the prefix name through command line.
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -ne 0 ] #condition to check whether arguments is given in command line or not"
then
    arr=(`ls *.jpg`) #all the jpg files will be stored in array "arr". 
    for i in ${arr[@]}  #each and every jpg file name will be stored for every iteration of "for" loop.
    do
	prefix=`echo "$i" | cut -d "." -f 1 | tr -d [:digit:]` #the prefix content of file name will be stored in the variable "prefix".
	digit=`echo "$i" | tr -cd [:digit:]`  #the digit content is extracted from filename and it will be stored in the variable "digit".
	if [ $prefix != $1 ]  #if prefix is not equal to argument given line the it will be renamed with prefix given in command line.
	then
	    mv $i $1$digit.jpg  #the file name is renamed by move command.
	fi
    done
else
    echo "Error : Please pass the prefix name through command line." #if arguments are not passing through command line, it will print error.
fi
