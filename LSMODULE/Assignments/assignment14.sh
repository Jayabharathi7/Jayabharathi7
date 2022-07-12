<<doc
NAME       : JAYABHARATHI J
DATE       :
DESCRIPTION: WRITE SCRIPT CALLED SAY_HELLO, WHICH WILL PRINT GREETINGS BASED ON TIME
SAMPLE I/P :  1. When we start shell (whenever you opening new tab or terminal)
Good Morning user, Have nice day!
This is Thursday 08 in June of 2017 (10:44:10 AM)
SAMPLE O/P :
doc

#!/bin/bash
day=`date +%A`   
date=`date +%d`
month=`date +%B`
year=`date +%Y`
time=`date +%r | cut -c 1-11`
t=`date +%H` #24hrs time is assigned to variable "t" for condition check.
w=`whoami`
if [ $t -ge 5 -a $t -lt 12 ]  #if time is in range of (5 AM – 12 PM), it prints "Good morning" message.
then
    echo "Good Morning $w, Have a nice day!"
    echo "This is $day $date in $month of $year ($time)"
elif [ $t -ge 12 -a $t -lt 14 ]  #if time is in range of (12 PM – 2 PM), it prints "Good noon" message.
then
    echo "Good Noon $w, Have a nice day!"
    echo "This is $day $date in $month of $year ($time)"
elif [ $t -ge 12 -a $t -lt 17 ]   #if time is in range of (2 PM – 5 PM), it prints "Good afternoon" message.
then
    echo "Good afternoon $w, Have a nice day!"
    echo "This is $day $date in $month of $year ($time)"
elif [ $t -ge 17 -a $t -lt 21 ]  #if time is in range of (5 PM – 9 PM), it prints "Good evening" message.
then
    echo "Good evening $w, Have a nice day!"
    echo "This is $day $date in $month of $year ($time)"
elif [ $t -ge 21 -a $t -lt 5 ]  #if time is in range of (9 PM – 5 AM), it prints "Good night" message.
then
    echo "Good night $w, Have a nice day!"
    echo "This is $day $date in $month of $year ($time)"
fi
