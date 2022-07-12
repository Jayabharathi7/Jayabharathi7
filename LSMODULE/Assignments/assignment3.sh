<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: WRITE A SCRIPT FOR ARITHMETIC CALCULATOR USING COMMAND LINE ARGUMENTS
SAMPLE I/P : 1. ./04_arithmatic_calc.sh 25 + 41
25 + 41 = 67
2. ./04_arithmatic_calc 10 x 5
10 x 5 = 50
3. ./04_arithmatic_calc.sh 25 / 5
25 / 5 = 5
4. ./04_arithmatic_calc.sh 10.2 – 5.6
10.2 – 5.6 = 4.6
5. ./04_arithmatic_calc.sh
Error : Please pass the arguments through command line.
Usage:./04_arithmatic_calc 2.3 + 6.7
6. ./04_arithmatic_calc.sh 3.4
Error:Please pass 3 arguments.
Usage:./04_arithmatic_calc 2.3 + 6.7
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -eq 0 ]      #if number of arguments is equal to zero then it prints as "error:please pass the arguments through commend line 
then
    echo "Error : Please pass the arguments through command line. Usage:./arithmatic_calc.sh 2.3 + 6.7"
elif [ $# -ne 3 ]    #if number of arguments is not equal to 3 then it prints as "error: please pass three arguments
then
    echo "Error : Please pass 3 arguments. Usage:./arithmatic_calc.sh 2.3 + 6.7"
else                 #if "if" and "elif" condition fails then the case will execute   
    case $2 in
	+) sum=`echo "scale=2;$1 $2 $3" | bc`   #this case is for addition
	    echo "$1 $2 $3 = $sum"
	    ;;
	-) sub=`echo "scale=2;$1 $2 $3" | bc`   #this case is for subtraction
	    echo "$1 $2 $3 = $sub"
	    ;;
	x) mul=`echo "scale=2;$1 * $3" | bc`    #this case is for multiplication
	    echo "$1 $2 $3 = $mul"
	    ;;
	/) div=`echo "scale=2;$1 $2 $3" | bc`   #this case is for division
	    echo "$1 $2 $3 = $div"
	    ;;
	*) echo "Please use operators +, -, x, / only"  #this case is for default
	    ;;
    esac
fi
