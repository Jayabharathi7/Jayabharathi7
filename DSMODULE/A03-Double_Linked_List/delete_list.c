#include "dll.h"

int dl_delete_list(Dlist **head, Dlist **tail)
{
    //Checking list is empty or not//
    if(*head == NULL)  
	    return FAILURE;
    Dlist *temp1 = *head, *temp2;
    //Using loop to delete every node in the list upto NULL//
    while(temp1)      
    {
	    temp2 = temp1 -> next;
	    free(temp1);
	    temp1 = temp2;
    }
    //Finally head and tail be updated with NULL//
    *head = NULL;  
    *tail = NULL;
    return SUCCESS;
    
}
