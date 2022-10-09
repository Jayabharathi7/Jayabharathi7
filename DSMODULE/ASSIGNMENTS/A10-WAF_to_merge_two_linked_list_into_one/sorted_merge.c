#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
    //If head1 and head2 are NULL returning list_empty//
    if((*head1 == NULL) && (*head2 == NULL)) 
	return LIST_EMPTY;
    //If one head is NULL, sorting the other head//	
    else if(*head1 && *head2 == NULL) 
    {
	sort(head1);
	return SUCCESS;
    }
    //If head1 is NULL, sorting head2//
    else if((*head1 == NULL) && *head2) 
    {
	*head1 = *head2;
	sort(head1);
	return SUCCESS;
    }
    //When both heads are not NULL//
    else                 
    {
	Slist *temp = *head1;
	while(temp -> link)
	{
	    //Traversing the list1 and making last node point to head2//
	    temp = temp -> link;   
	}
	temp -> link = *head2;
	//Calling the sort function after merging//
	sort(head1);           
	return SUCCESS;
    }
}
