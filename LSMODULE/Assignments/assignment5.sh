<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: WRITE A SCRIPT TO PERFORM ARITHMETIC OPERATION ON DIGITS OF A GIVEN NUMBER
SAMPLE I/P : 1. ./08_operator_dependent.sh 1234+
Sum is 10
2. ./08_operator_dependent.sh 8312-
Sub is 2
3. ./08_operator_dependent.sh 5487
Error: Operator missing or invalid operator, please pass
operator as last digit (+,-,x,/)
4. ./08_operator_dependent.sh 1111x
Mul is 1
5. ./08_operator_dependent.sh
Error : Please pass the argument.
Usage : ./09_operator_dependent.sh 2345+
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -eq 1 ]   #"if" condition is to check whether arguments is given in command line or not
then
    var=$1        #The first argument is assigned to variable "var"
    operator=${var: -1}      #The last index of the argument should be operator is assigned to variable "operator"  
    res=${var:0:1}          #Initialize the variable "res" is assigned from first index of the argument
    x=0                     #Initialize the variable "x" equal to 0 for addition and subtraction
    y=1                     #Initialize the variable "y" equal to 1 for multiplication and division
    case $operator in       
	+) for i in `seq 0 $((${#var}-2))`  #This case is for addition
	do
	    a=$(($i+1))                     #The variable "a" is assigned to next value with respect to "i"
	    res=$(($res+$x))                #The variable "res" is to perform addition operation for this case
	    x=${var:$a:1}                   #The variable "x" is assigned to next digit of argument by using offset with repect to "a"
	done
	echo "sum of digits = $res"      #After the termination of for loop, the result stored in the variable "res" will be printed
	;;    
        -) for i in `seq 0 $((${#var}-2))`   #this case is for subtraction
        do
	    a=$(($i+1))                     #The variable "a" is assigned to next value with respect to "i"
	    res=$(($res-$x))                #The variable "res" is to perform subtraction operation for this case
	    x=${var:$a:1}                   #The variable "x" is assigned to next digit of argument by using offset with repect to "a" 
        done
	echo "subtraction of digits = $res"  #After the termination of for loop, the result stored in the variable "res" will be printed
        ;;
        x) for i in `seq 0 $((${#var}-2))`  #this case is for multiplication
        do
            a=$(($i+1))                     #The variable "a" is assigned to next value with respect to "i"
            res=$(($res*$y))                #The variable "res" is to perform multiplication operation for this case
            y=${var:$a:1}                   #The variable "y" is assigned to next digit of argument by using offset with repect to "a" 
        done
	echo "multiplication of digits = $res" #After the termination of for loop, the result stored in the variable "res" will be printed
        ;;
        /) for i in `seq 0 $((${#var}-2))`   #this case is for division
        do
            a=$(($i+1))                       #The variable "a" is assigned to next value with respect to "i"
            res=`echo "scale=2;$res/$y" | bc` #The variable "res" is to perform division operation for this case
            y=${var:$a:1}                     #The variable "y" is assigned to next digit of argument by using offset with repect to "a"
        done
	echo "Division of digits = $res"      #After the termination of for loop, the result stored in the variable "res" will be printed
        ;;
        *) echo "Error: Operator missing or invalid operator, please pass operator as last digit (+,-,x,/)" #this case is for default
        exit 
        ;; 
esac
else                                    # if "if" condition fails it prints the error message
    echo "Error : Please pass the arguments through CL. Usage : ./operator_dependent.sh 2345+"
fi
