#include "sll.h"

int find_node(Slist *head, data_t data)
{
    int count;
    //Checking list is empty or not//
    if(head == NULL)               
	    return FAILURE;
    //For every iteration of loop, the count will be incremented//	    
    for(count = 1; head; count++) 
    {
            //Checking the data will be in the list or not//
	    if(head -> data == data) 
	        return count;
	    //Head will be updated with next node address//    
	    head = head -> link;  
    }
    return FAILURE;   
	
}
