#include "dll.h"

int dl_delete_first(Dlist **head, Dlist **tail)
{
    //Checking list is empty or not//
    if(*head == NULL)   
	    return FAILURE;
    //Checking list contains only one node or not//	    
    if(*head == *tail)    
    {
            //If condition is true, then single node will be deleted, head and tail will be updated with NULL//
	    free(*head);    
	    *head = NULL;
	    *tail = NULL;
	    return SUCCESS;
    }
    //If list contains multiple node, then first node will be deleted//
    *head = (*head) -> next;
    free((*head) -> prev);
    (*head) -> prev = NULL;
    return SUCCESS;
}
