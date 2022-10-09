#include "sll.h"

//Remove duplicate data's from list//
int remove_duplicates( Slist **head )
{
    //Checking list is empty or not//
    if(*head == NULL)
	    return FAILURE;            
    Slist *temp = *head, *prev, *curr;
    //Checking list contains only one node or not//
    if(temp -> link == NULL)      
	    return SUCCESS;
    while(temp)
    {
	    prev = temp;
	    curr = temp -> link;
	    while(prev && curr)
	    {
	        //By using selection sorting duplicate will be removed//
	        if(temp -> data == curr -> data)       
	        {
		        prev -> link = curr -> link;
		        free(curr);
		        curr = prev -> link;
		        if(curr == NULL)
		            break;
	        }
	        else
	        {
	            //Prev and curr pointer will move for every iteration//
	            prev = prev -> link;             
	            curr = curr -> link;
	        }
	    }
	    temp = temp -> link;
    }
    return SUCCESS;

}

