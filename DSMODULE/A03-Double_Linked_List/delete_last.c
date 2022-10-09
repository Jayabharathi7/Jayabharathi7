#include "dll.h"

int dl_delete_last(Dlist **head, Dlist **tail)
{
    //Checking list is empty or not//
    if(*head == NULL)     
	    return FAILURE;
    //Checking list contains only one node or not//	     
    if(*head == *tail) 
    {
            //Single node will be deleted, then head and tail be updated with NULL//
	    free(*tail);    
	    *head = NULL;
	    *tail = NULL;
	    return SUCCESS;
    }
    //If list contains multiple node, then last node will be deleted and tail will be updated//
    *tail = (*tail) -> prev;  
    free((*tail) -> next);
    (*tail) -> next = NULL;
    return SUCCESS;
}
