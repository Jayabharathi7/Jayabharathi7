#include "sll.h"

//Function to reverse the given single linked list//
int reverse_iter(Slist **head) 
{
    //Checking list is empty or not//
    if(*head == NULL)      
	    return LIST_EMPTY;
    Slist *prev = NULL, *curr = *head, *next = *head;
    //Loop will iterate up until next not equal to NULL//
    while(next)     
    {
            //For every iteration, link between two node get reversed//
	    next = next -> link;  
	    curr -> link = prev;
	    prev = curr;
	    curr = next;
    }
    //Head will be updated with last node//
    *head = prev;    
    return SUCCESS;
} 

