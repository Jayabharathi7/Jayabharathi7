#include "sll.h"

int sl_sort(Slist **head)
{
    //Checking list is empty or not//
    if(*head == NULL)                 
	return LIST_EMPTY;
    if((*head) -> link == NULL)
	return SUCCESS;
    Slist *temp = *head, *temp_prev, *curr, *curr_prev, *swap;
    int flag;
    //This loop will iterate upto temp of link reaches NULL//
    while(temp -> link)              
    {
        //Current will be updated while starting of inner loop for each iteration//
	curr = temp -> link; 
	flag = 1;
	while(curr)
	{
	    //Checking temp of data is greater than current of data or not//
	    if(temp -> data > curr -> data)    
	    {
	            //Checking it is temp is pointing first node or not//
		    if(temp == *head && flag == 0)          
		    {
		        //If it is, two node will get swapped and head should be updated//
		        swap = curr -> link;    
		        curr -> link = temp -> link;
		        temp -> link = swap;
		    
		        *head = curr;
		        curr_prev -> link = temp;
		    }
		    else if(flag == 0) 
		    {
		        //If temp is not pointing the first node//
		        swap = curr -> link;   
		        curr -> link = temp -> link; 
		        temp -> link = swap;

		        temp_prev -> link = curr;
		        curr_prev -> link = temp;
		    }
		    else if(flag == 1 && temp == *head)
		    {
		        temp -> link = curr -> link;
		        curr -> link = temp;
		        *head = curr;
		    }
		    else
		    {
		        temp -> link = curr -> link;
		        curr -> link = temp;
		        temp_prev -> link = curr;
		    }
                   //After swapping, temp and current position will be changed//
		    swap = temp; 
		    //So to correct the position, swapping will be done again//
		    temp = curr;    
		    curr = swap;
	    }
	    curr_prev = curr;
	    curr = curr -> link;
	    flag = 0;  
	}
	temp_prev = temp;
	temp = temp -> link;
    }



    return SUCCESS;

}
