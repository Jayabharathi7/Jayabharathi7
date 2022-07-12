<<doc
NAME       :
DATE       :
DESCRIPTION: SCRIPT TO FIND THE SHAPE IS SQUARE OR RECTANGLE
SAMPLE I/P :
SAMPLE O/P :
doc


#!/bin/bash
read -p "enter length and breadth:" l b
if [ $l -eq $b ]
then
   echo "square"
else
    echo "rectangle"
fi

