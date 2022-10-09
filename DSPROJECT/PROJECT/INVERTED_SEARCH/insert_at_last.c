/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
*/
#include "main.h"

int insert_at_last(f_list **head, char *argv)    //function defination
{
    f_list *new = malloc(sizeof(f_list));           //dynamic memory allocation
    if(new == NULL)                         //checking list is empty or not 
	return FAILURE;
    strcpy(new -> f_name, argv);                  //update data to new node
    new -> f_link = NULL;                  //update link of new node to null
    if(*head == NULL)              //checking list is empty or not
    {
	*head = new;                 //if it is empty, linking of new node established with head
	return SUCCESS;
    }
    f_list *temp = *head;       
    while(temp->f_link)             //while loop will iterate up to null
	temp = temp -> f_link;       
    temp -> f_link = new;          //new node will be linked at the end of list
    return SUCCESS;
}
