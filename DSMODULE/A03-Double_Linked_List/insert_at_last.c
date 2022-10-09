#include "dll.h"

int dl_insert_last(Dlist **head, Dlist **tail, int data)
{
    //Allocating the memory for new node//
    Dlist *new = malloc(sizeof(Dlist)); 
    if(new == NULL)
	    return FAILURE;
    //Updating the data in new node//	    
    new -> data = data; 
    new -> prev = NULL;
    new -> next = NULL;
    //Checking list is empty or not//
    if(*head == NULL)   
    {
            //If condition is true, then head and tail be updated with new node address//
	    *head = new;   
	    *tail = new;
	    return SUCCESS;
    }
    //Inserting the new node at last position//
    (*tail) -> next = new; 
    new -> prev = *tail;
    *tail = new;
    return SUCCESS;
}
