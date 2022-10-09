#include "sll.h"

//Function for insert the number in sorted linked list//
int insert_sorted( Slist **head, data_t data) 
{
    //Allocating the memory for new node//
    Slist *new = malloc(sizeof(Slist)); 
    if(new == NULL)
	    return FAILURE;
    //Updating the data in new node//	    
    new -> data = data;                
    Slist *temp = *head, *temp1;
    //Checking list is empty or data to be inserted before is present in first node or not//
    if(*head == NULL || data <= temp -> data)      
    {
	    new -> link = *head;
	    *head = new;
	    return SUCCESS;
    }

    while(temp)
    {
            //Checking the data is less then or equal to current node//
	    if(data <= temp -> data)   
	    {
	        //If it is new node will be inserted before the current node//
	        new -> link = temp; 
	        temp1 -> link = new;
	        return SUCCESS;
	    }
	    temp1 = temp;
	    temp = temp -> link;
    }
    //If the data is greater than all the element in list, it will be inserted in the last position//
    new -> link = temp1 -> link;  
    temp1 -> link = new;
    return SUCCESS;
} 
