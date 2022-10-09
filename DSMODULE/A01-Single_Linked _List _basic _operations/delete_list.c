#include "sll.h"

int sl_delete_list(Slist **head)
{
    //Checking list is empty or not//
    if(*head == NULL) 
	    return FAILURE;
    Slist *temp = *head;
    while(temp)             
    {
	    *head = temp -> link;
	    //Every iteration of loop, each node will be freed//
	    free(temp);
	    temp = *head;
    }
    return SUCCESS;
	
}

