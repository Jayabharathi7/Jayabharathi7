#include "sll.h"

//Function to create the loop//
int create_loop(Slist **head, data_t data)
{
    //Checking list is empty or not//
    if(*head == NULL)                 
	    return LIST_EMPTY;
    Slist *temp = *head, *back_up = NULL;
    while(temp -> link) 
    {
            //If given data is found, that address will be assigned to back_up pointer//
	    if(temp -> data == data) 
	        back_up = temp;
	    temp = temp -> link; 
    }
    //After loop termination, if back_up contains NULL means data not found//
    if(back_up == NULL)      
	    return DATA_NOT_FOUND;
    else
            //After loop termination, last node link will be updated with back_up value//
	    temp -> link = back_up;  
    return SUCCESS;
}
