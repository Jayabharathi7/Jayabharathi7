#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
    //Dynamically allocating the memory//
    Slist *new = malloc(sizeof(Slist));   
    //Checking dynamic memory allocation is success or not//
    if(new == NULL)                  
	    return FAILURE;
    //New node will be inserted at first//	    
    new -> data = data;       
    new -> link = *head;
    *head = new;
    return SUCCESS;
	
}
