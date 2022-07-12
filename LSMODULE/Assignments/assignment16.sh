<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: USE PIPES OR REDIRECTION TO CREATE AN INFINITE FEEDBACK LOOP
SAMPLE I/P :  1. ./24_redirection.sh
Before loop file contents
Hai hello
After loop file contents
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
.
.
.
SAMPLE O/P :
doc


#!/bin/bash
echo "Hai hello" >> test.txt  #by using redirection method, message "Hai hello" is printed on new file.
echo "Before loop file contents"
cat test.txt
echo "After loop file contents" 
tail -f test.txt >> test.txt | tail -f test.txt #The command "tail -f test.txt" makes output appended data as file grows and it will redirected to same file then the infinite loop creates. Same command "tail -f test.txt" using once again to show output by pipeline method.
