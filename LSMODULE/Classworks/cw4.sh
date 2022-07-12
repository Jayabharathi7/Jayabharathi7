<<doc
NAME       :
DATE       :
DESCRIPTION: SCRIPT TO FIND THE PERIMETER
SAMPLE I/P :
SAMPLE O/P :
doc


#1/bin/bash
read -p "enter length and breadth" l b
perimeter=$((2*(${l}+${b})))
echo "the perimeter is $perimeter"

