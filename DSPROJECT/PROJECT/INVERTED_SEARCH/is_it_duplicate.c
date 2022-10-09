/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
*/
#include "main.h"

int is_it_duplicate(f_list **head, char *argv)
{
    if(*head == NULL)    //checking list is empty or not
	return DATA_NOT_FOUND;
    f_list *temp = *head;     //assigning the head value to the temporary variable 
    while(temp)                             //while loop will iterate up to NULL
    {
	if(strcmp(temp -> f_name, argv) == 0)           //checking whether the given data is present in the list or not
	{
	    return DATA_FOUND;
	}
	temp = temp -> f_link;
    }
    return DATA_NOT_FOUND;
}
