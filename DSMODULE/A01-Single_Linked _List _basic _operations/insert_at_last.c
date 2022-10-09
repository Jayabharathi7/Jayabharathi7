#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
    //Dynamically allocating the memory//
    Slist *new = malloc(sizeof(Slist));    
    //Checking list is empty or not//       
    if(new == NULL)                        
	    return FAILURE;
    //Updating the data to a new node//	    
    new -> data = data;
    //Updating the link of new node to NULL//
    new -> link = NULL;
    //Checking list is empty or not//
    if(*head == NULL)          
    {
            //If it is empty, then linking of new node established with head//
	    *head = new;               
	    return SUCCESS;
    }
    Slist *temp = *head;
    //Running the loop upto NULL//       
    while(temp->link)           
	    temp = temp -> link;
    //New node will be linked at the end of list//	           
    temp -> link = new;         
    return SUCCESS;

}
