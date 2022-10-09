#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
    //Checking the list is empty or not//
    if(*head == NULL)                 
	    return LIST_EMPTY;
    //The head value is assigned to temp variable//	    
    Slist *temp = *head, *temp1 = NULL;     
    while(temp)
    {
            //Checking the given data is present in the list or not//
	    if(temp -> data == g_data)     
	    {
	        //Allocating the new node//
	        Slist *new = malloc(sizeof(Slist));
	        if(new == NULL)       
		        return FAILURE;
		//Updating the data in the new node//        
	        new -> data = ndata;          
	        new -> link = NULL;
	        //Checking the given data is present in first node or not//
	        if(temp == *head)         
	        {
		        new -> link = temp;
		        //If it is head will be updated with new node address//
		        *head = new;       
		        return SUCCESS;
	        }
	        //If it is not a first node previous node is updated with new node address//
	        temp1 -> link = new; 
	        new -> link = temp;
	        return SUCCESS;
	    }
	    temp1 = temp;
	    temp = temp -> link;
    }
    return DATA_NOT_FOUND;
}
