/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
*/
#include "main.h"

int create_HT(hash_t *HT)  //function defination to create hashing table
{ 
    int i;
    for(i = 0; i < 27; i++)
    {
	HT[i].value = i;
	HT[i].hash_link = NULL;   //link of each node initiallized as null
    }
    return SUCCESS;
}
