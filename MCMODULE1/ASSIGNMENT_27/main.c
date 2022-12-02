/*
 * NAME        : JAYABHARATHI J
 * DATE        : 02/12/2022
 * DESCRIPTION : IMPLEMENT A 4 DIGIT KEY PRESS COUNTER WITH PERSISTENCE USING EXTERNAL EEPROM
*/

#include <xc.h>
#include "main.h"
#include "ssd_display.h"
#include "i2c.h"
#include "ds1307.h"
#include "matrix_keypad.h"


static unsigned char ssd[MAX_SSD_CNT];
static unsigned char digit[] = {ZERO, ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
void init_config(void)
{
    //  init_ds1307();
    init_ssd_control();
    init_matrix_keypad();
    init_i2c();
    /*  TRISB0=0;
        RB0=0;*/
}

void main(void)
{
    init_config();
    unsigned char i=0,key,key1,key2;
    unsigned short j;
    unsigned long count=0,delay=0;
    count=(read_ds1307(0x03)*1000)+(read_ds1307(0x04)*100)+(read_ds1307(0x05)*10)+read_ds1307(0x06);
    while(1)
    {
        key2=read_switches(STATE_CHANGE);
        if(key2 == MK_SW1)
        {
            count++;
        }
        if(key2 == MK_SW2)
        {
            write_ds1307(0x03, (count/1000));
            write_ds1307(0x04, (count/100)%10);
            write_ds1307(0x05, (count/10)%10);
            write_ds1307(0x06, (count%10));

        }
        key1=read_switches(LEVEL_CHANGE);
        if(key1 == MK_SW1)
        {
            if(delay++ == 500)
            {
                delay=0;
                count=0;
            }
        }
        ssd[0]=digit[(count/1000)];
        ssd[1]=digit[((count/100)%10)];
        ssd[2]=digit[((count/10)%10)];
        ssd[3]=digit[(count%10)];
        display(ssd);
    }
}
