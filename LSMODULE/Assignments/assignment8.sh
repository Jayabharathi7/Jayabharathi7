<<doc
NAME       : JAYABHARATHI J
DATE       : 
DESCRIPTION: WRITE A SCRIPT TO SORT A GIVEN NUMBER IN ASCENDING OR DESCENDING ORDER
SAMPLE I/P :  1. ./12_sorting.sh -a 5 4 6 2 3 8 9 7 1
Ascending order of array is 1 2 3 4 5 6 7 8 9
2. ./12_sorting.sh -d 5 4 6 2 3 8 9 7 1
descending order of array is 9 8 6 5 4 3 2 1
3. ./12_sorting.sh 5 4 6 2 3 8 9 7 1
Error : Please pass the choice.
Usage : ./12_sorting -a/-d 4 23 5 6 3
4. ./12_sorting.sh
Error : Please pass the argument through command line.
Usage : ./12_sorting -a/-d 4 23 5 6 3
SAMPLE O/P :
doc


#!/bin/bash
if [ $# -ne 0 ] #condition to check whether arguments pass through command line or not.
then
arr=($@)     #if condition is true then all the arguments in command line assigned to array "arr".
x=${arr[0]}  #extract the zeroth index of array for switch case.
case $x in
    -a) for i in `seq 1 $((${#arr[@]}-1))`  #this case for ascending, outer "for" loop iterates from 1 to (no of array elements-1).
        do
        for j in `seq 1 $((${#arr[@]}-$i-1))` #inner "for" loop iterates from 1 to (no of array elements-i-1).
        do
	    if [ ${arr[j]} -gt ${arr[$(($j+1))]} ]  #by bubble sorting technique, if current element is greater than next element then it will get swap.
	    then
		temp=${arr[j]}
		arr[j]=${arr[$(($j+1))]}
		arr[$(($j+1))]=$temp
	    fi
	done
	done
    echo "Ascending order of array is ${arr[@]:1}"  #after sorting, all array elements will be stored in variable "y" except zeroth index element.
    ;;
    -d) for i in `seq 1 $((${#arr[@]}-1))` #this case for descending, outer "for" loop iterates from 1 to (no of array elements-1).
        do
        for j in `seq 1 $((${#arr[@]}-$i-1))`  #inner "for" loop iterates from 1 to (no of array elements-i-1).
        do
            if [ ${arr[j]} -lt ${arr[$(($j+1))]} ]  #by bubble sorting technique, if current element is lesser than next element then it will get swap.
	    then
	        temp=${arr[j]}
	        arr[j]=${arr[$(($j+1))]}
	        arr[$(($j+1))]=$temp
	    fi
        done
        done
        echo "Descending order of array is ${arr[@]:1}"  #after sorting, all array elements will be stored in variable "y" except zeroth index element.
    ;;
    *) echo "Error : Please pass the choice."  #if first element is rather than "-a" or "-d", it will print error message.
       echo "Usage : ./sorting -a/-d 4 23 5 6 3"
    ;;
esac
else
    echo "Error : Please pass the argument through command line." #if command line arguments are not given, it prints error message.
    echo "Usage : ./sorting -a/-d 4 23 5 6 3"
fi


