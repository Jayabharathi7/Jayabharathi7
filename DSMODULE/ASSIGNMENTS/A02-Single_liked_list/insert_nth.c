#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
    int count;
    //Checking the list is empty or not//
    if(*head == NULL)            
    {
            //If given position is 1, then node will be created and updated at position 1//
	    if(n == 1)                    
	    {
	        Slist *new = malloc(sizeof(Slist));
	        if(new == NULL)
		        return FAILURE;
	        new -> data = data;
	        new -> link = NULL;
	        *head = new;
	        return SUCCESS;
	    }
	    return LIST_EMPTY;
    }
    Slist *temp = *head, *temp1 = NULL;
    //Running the loop upto nth position//
    for(count = 1; temp; count++)       
    {
            //Checking whether the given position is present or not//
	    if(count == n)                 
	    {
	        //Allocating the new node//
	        Slist *new = malloc(sizeof(Slist));   
	        if(new == NULL)
		        return FAILURE;
		//Updating the data in new node//        
	        new -> data = data;      
	        new -> link = NULL;
	        if(count == 1)             
	        {
	                //If the given position is first, then address of new node will be updated to head//
		        new -> link = temp;     
		        *head = new;
		        return SUCCESS;
	        }
	        //If the given position is not first, then address of new node will be updated to previous node link//
	        new -> link = temp;   
	        temp1 -> link = new;
	        return SUCCESS;
	    }
	    temp1 = temp;
	    temp = temp -> link;
    }
    //Checking whether the given position is present or not//
    if(count == n)                 
    {
	    //Allocating the new node//
	    Slist *new = malloc(sizeof(Slist));  
	    if(new == NULL)
		    return FAILURE;
	    //Updating the data in the new node//	    
	    new -> data = data;     
	    //If the given position is not first, then address of new node will be updated to previous node link//
	    new -> link = temp;    
	    temp1 -> link = new;
	    return SUCCESS;
	}
    return POSITION_NOT_FOUND;
}


