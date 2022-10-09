#include "hash.h"
//Function definition to create hashing table//
int create_HT(hash_t *HT, int size) 
{ 
    int i;
    for(i = 0; i < size; i++)
    {
            //Key of each node has corresponding index value//
	    HT[i].index = i; 
	    //Value of each node initialized as -1//
	    HT[i].value = -1;   
	    //Link of each node initialized as NULL//
	    HT[i].link = NULL;
    }
    return SUCCESS;
}
