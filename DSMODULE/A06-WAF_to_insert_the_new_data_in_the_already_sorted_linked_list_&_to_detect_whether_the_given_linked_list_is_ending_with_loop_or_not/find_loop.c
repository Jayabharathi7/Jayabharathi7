#include "sll.h"

//Function for finding the loop in the link//
int find_loop(Slist *head)
{
    //Checking list is empty or not//
    if(head == NULL)                 
	    return LIST_EMPTY;
    //Checking list contains single node or not//	    
    if(head -> link == NULL)         
	    return LOOP_NOT_FOUND;
    Slist *t1 = head, *t2 = head -> link;
    while(t1 && t2 -> link)
    {
        //If both pointer points same position, then loop found//
    	if(t1 == t2)          
	        return SUCCESS;
	    t1 = t1 -> link;
	    //This pointer will move alternatively//       
	    t2 = t2 -> link -> link;
    }

    return LOOP_NOT_FOUND;

}
