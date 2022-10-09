#include "sll.h"

int sl_delete_first(Slist **head)
{
    //Checking list is empty or not//
    if(*head == NULL)         
	    return FAILURE;
    Slist *temp = *head;       
    //Head will be updated with next node address of first node//    
    *head = temp -> link; 
    //Freeding the first node//
    free(temp);          
    return SUCCESS;


}
