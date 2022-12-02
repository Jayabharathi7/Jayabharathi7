/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A 4 DIGIT KEY PRESS COUNTER
*/ 


#include "main.h"

static unsigned char ssd[MAX_SSD_CNT];                                                            //array for leds          
static unsigned char digit[] = {ZERO, ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};       //array for digits

void init_config(void)
{
    init_ssd_control();                     //initialisation for ssd
    init_digital_keypad();                  //initialisation for digital keypad
}

void main(void)
{
    /*function call to initialisation*/
    init_config();          

    /*variables*/
    int key1, key2, reset = 0;
    long unsigned int wait = 0;
    unsigned int count = 0;

    while(1)
    {
        /*ssd array value assigning*/
            ssd[0] = digit[count / 1000];
            ssd[1] = digit[(count / 100) % 10];
            ssd[2] = digit[(count / 10) % 10];
            ssd[3] = digit[count % 10];

            /*calling the function with edge trigger*/
            key1 = read_digital_keypad(STATE_CHANGE);

            /*if switch 2 pressed then incrementing the count*/
            if(key1 == SWITCH2)
            {
                count++;
                reset = 0;
            }

            /*calling the function with level change*/
            key2 = read_digital_keypad(LEVEL);

            /*if switch pressed for a long time then reseting the counter*/
            if(key2 == SWITCH2)
            {
                if(reset++ == 100)
                {
                    reset = 0;
                    count = 0;
                }
            }

            /*function to display the count in the ssd display*/
            display(ssd);
    }
}
