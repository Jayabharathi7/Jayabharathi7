#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{
    //Checking list is empty or not//
    if(*head == NULL)        
	    return LIST_EMPTY;
    Dlist *temp = *head;
    while(temp)
    {
            //Checking given data is present or not//
	    if(temp -> data == data)   
	    {
	        //If data is present, then checking list contains only one node or not//
	        if(*head == *tail)    
	        {
		        free(temp);
		        *head = NULL;
		        *tail = NULL;
		        return SUCCESS;
	        }
	        //Checking the data is present in first node or not//
	        else if(*head == temp)   
	        {
		        (temp -> next) -> prev = NULL;
		        *head = temp -> next;
		        free(temp);
		        return SUCCESS;
	        }
	        //Checking the data is present in last node or node//
	        else if(*tail == temp)  
	        {
		        (temp -> prev) -> next = NULL;
		        *tail = temp -> prev;
		        free(temp);
		        return SUCCESS;
	        }
	        //Data present in the element will be deleted, then the previous and next node will be linked// 
	        else           
	        {
		        (temp -> prev) -> next = temp -> next;
		        (temp -> next) -> prev = temp -> prev;
		        free(temp);
		        return SUCCESS;
	        }

	    }
	    temp = temp -> next;
    }
    return DATA_NOT_FOUND;


}

