#include "dll.h"

int dl_insert_first(Dlist **head, Dlist **tail, int data)
{
    //Allocating the memory for new node//
    Dlist *new = malloc(sizeof(Dlist)); 
    if(new == NULL)
	    return FAILURE;
    //Updating the data in a new node//	          
    new -> data = data;  
    new -> next = NULL;
    new -> prev = NULL;
    //Checking list is empty or not//
    if(*tail == NULL) 
    {
            //If it is, tail and head updated with new node address//
	    *tail = new; 
	    *head = new;
	    return SUCCESS;
    }
    //If list contains more than one node, new node is inserted between head and first node//
    new -> next = *head; 
    (*head) -> prev = new;
    *head = new;
    return SUCCESS;
}
