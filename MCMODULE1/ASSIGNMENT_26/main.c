/*

 * NAME          : JAYABHARATHI J
 * DATE          : 02/12/2022
 * DESCRIPTION   : IMPLEMENT A 4 DIGIT KEY PRESS COUNTER WITH PERSISTENCE

*/

#include <xc.h>
#include "main.h"
#include "ssd_display.h"
#include "digital_keypad.h"
#include "eeprom.h"

static unsigned char ssd[MAX_SSD_CNT];
static unsigned char digit[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void init_config(void)
{
    //initialising ssd
    init_ssd_control();

    //for displaying the eeprom data initially
    ssd[0] = digit[read_internal_eeprom(0x00)];
    ssd[1] = digit[read_internal_eeprom(0x01)];
    ssd[2] = digit[read_internal_eeprom(0x02)];
    ssd[3] = digit[read_internal_eeprom(0x03)];


    //enabling the peripheral interupt 
    PEIE = 1;

    //enabling the global interupt
    GIE = 1;
}


void main(void)
{
    unsigned char key;
    unsigned short count, delay = 0;

    //initialising count with eeprom value
    count = 1000 * read_internal_eeprom(0x00) + 100 * read_internal_eeprom(0x01) + 10 * read_internal_eeprom(0x02) + read_internal_eeprom(0x03);

    //function call to configuration
    init_config();

    while (1)
    {
        //reading the key
        key = read_digital_keypad(STATE_CHANGE);

        //if sw1 pressed then incrementing the count
        if(key == SWITCH1)
            count++;

        //if sw2 pressed then storing the count to the eeprom
        else if(key == SWITCH2)
        {
            //writting the datas to the eeprom
            write_internal_eeprom(0x00, count / 1000);
            write_internal_eeprom(0x01, count / 100 % 10);
            write_internal_eeprom(0x02, count / 10 % 10);
            write_internal_eeprom(0x03, count % 10);
        }

        //reading the key with level trigger
        key = read_digital_keypad(LEVEL);

        //if sw1 is pressed for long then resetting the count value
        if(key == SWITCH1)
        {
            if(delay++ == 500)
            {
                delay = 0;
                count = 0;
            }
        }

        //assigning the ssd
        ssd[0] = digit[count / 1000];
        ssd[1] = digit[count / 100 % 10];
        ssd[2] = digit[count / 10 % 10];
        ssd[3] = digit[count % 10];

        //function call to display the count
        display(ssd);
    }
}

