#include "sll.h"

int sl_delete_last(Slist **head)
{
    //Checking list is empty or not//
    if(*head == NULL)                 
	    return FAILURE;                  
    Slist *prev_node, *temp = *head;
    //Running the loop upto NULL//
    while(temp -> link)             
    {
	    prev_node = temp;
	    //When the loop is terminating, then the address of last node will be updated to temp//
	    temp = temp -> link;      
    }
    //Freeding the last node//
    free(temp);                  
    //Checking list contains only one node or not//
    if(temp == *head)             
	    *head = NULL;
    else
            //Updating the previous node link with NULL//
	    prev_node -> link = NULL; 
    return SUCCESS;

}
