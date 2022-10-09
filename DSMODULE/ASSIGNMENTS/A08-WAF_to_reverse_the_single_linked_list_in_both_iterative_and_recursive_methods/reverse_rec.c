#include "sll.h"

extern Slist *head;       
int reverse_recursion(Slist *ptr)
{
    //Checking list is empty or not//
    if(ptr == NULL)  
	    return LIST_EMPTY;
    if(ptr -> link == NULL)       
    {
            //Last node address is updated to head//
	    head = ptr;  
	    return SUCCESS;
    }
    //Function call//
    reverse_recursion(ptr -> link); 
    //Link will get reversed for every return from last node// 
    Slist *temp = ptr -> link;  
    temp -> link = ptr;
    ptr -> link = NULL;
    return SUCCESS;
}
