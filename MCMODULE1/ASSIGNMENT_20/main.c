/*
 * NAME         : JAYABHARATHI J
 * DATE         : 01/12/2022
 * DESCRIPTION  : IMPLEMENT A RIGHT SCROLLING MESSAGE MARQUEE
*/

#include <xc.h>
#include "clcd.h"

//initialisation needs to be done
static void init_config(void)
{
    init_clcd();
}

void main(void)
{
    //string to be displayed on clcd
    char str[] = "Hello World", next, i, first;
    int wait = 0;

    //initialisation
    init_config();

    while (1)
    {
        //delay for the next shift
        if(wait++ == 5000)
        {
            //storing first index 
            first = str[0];
            //updating first index with last index
            str[0] = str[10];
            i = 0;
            //loop will run till str[i+1] reaches null charcter
            while(str[i + 1])
            {
                //swapping the adjacent characters
                next = str[i + 1];
                str[i + 1] = first;
                first = next;
                i++;
            }
            wait = 0;
        }
        //function call to print the string on the clcd
        clcd_print(str, LINE1(0));
    }
}
