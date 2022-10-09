#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
{
    //Checking list is empty or not//
    if(*head == NULL)              
	    return LIST_EMPTY;
    Dlist *temp = *head;
    while(temp)
    {
            //Checking the given data is present or not//
	    if(temp -> data == gdata)      
	    {
	        //Allocating the memory for new node//
	        Dlist *new = malloc(sizeof(Dlist));  
	        if(new == NULL)                
		        return FAILURE;
		//Updating the data in new node//        
	        new -> data = ndata;        
	        new -> prev = NULL;
	        new -> next = NULL;
	        //Checking the given data is present in last node or not//
	        if(temp == *tail)      
	        {
		        new -> next = temp -> next;
		        temp -> next = new;
		        new -> prev = temp;

		        *tail = new;
		        return SUCCESS;
	        }
                //Data will be inserted in new node after the given data//
	        new -> prev = temp;  
	        new -> next = temp -> next -> prev;
	        temp -> next -> prev = new;
	        temp -> next = new;
	        return SUCCESS;
	    }
	    temp = temp -> next;
    }
    return DATA_NOT_FOUND; 
}
