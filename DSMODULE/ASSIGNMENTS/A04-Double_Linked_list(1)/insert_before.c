#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
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
	        new -> next = NULL;
	        new -> prev = NULL;
	        //Checking the given data is present in first node or not//
	        if(temp == *head)    
	        {
		        new -> next = *head;
		        (*head) -> prev = new;
		        *head = new;
		        return SUCCESS;
	        }
	        //If given data is not present in the first node, new node will be inserted between two nodes//
	        new -> next = temp; 
	        new -> prev = temp -> prev;
	        temp -> prev -> next = new;
	        temp -> prev = new;
	        return SUCCESS;
	    }
	    temp = temp -> next;
    }
    return DATA_NOT_FOUND;


}
