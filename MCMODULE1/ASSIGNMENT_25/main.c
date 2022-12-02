/*
 * NAME        : JAYABHARATHI J
 * DATE        : 02/12/2022
 * DESCRIPTION : SELF COUNTER USING SSDS WITH STORAGE ON KEY PRESS
*/

#include <xc.h>
#include "digital_keypad.h"
#include "ssd_display.h"
#include "eeprom.h"

unsigned char ssd[4];
unsigned char digit[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
int count;

//intialisation needs to be done
static void init_config(void)
{
    init_digital_keypad();
    init_ssd_control();
}

void main(void)
{
    unsigned char key, wait;

    init_config();

    //updating count with eeprom stored count value
    count = read_internal_eeprom(0x00) * 1000 + read_internal_eeprom(0x01) * 100 + read_internal_eeprom(0x02) * 10 + read_internal_eeprom(0x03);

    wait = 0;
    while (1)
    {
        //reading the key
        key = read_digital_keypad(STATE_CHANGE);

        //if save key pressed saving the current count value to the eeprom
        if(key == SWITCH1)
        {
            //writting the count value into eeprom
            write_internal_eeprom(0x00, count / 1000);
            write_internal_eeprom(0x01, count / 100 % 10);
            write_internal_eeprom(0x02, count / 10 % 10);
            write_internal_eeprom(0x03, count % 10);
        }

        //updating the ssd with digits of count
        ssd[0] = digit[count / 1000];
        ssd[1] = digit[count / 100 % 10];
        ssd[2] = digit[count / 10 % 10];
        ssd[3] = digit[count % 10];

        //incrementing the count value approxmately with one second delay
        if(wait++ == 250)
        {
            if(++count == 10000)
                count = 0;
            wait = 0;
        }

        //displaying the count value
        display(ssd);
    }
}
