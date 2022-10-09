#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
	//Allocating the memory for new node//
	Slist *new = malloc(sizeof(Slist));
	if (!new)
	{
		return FAILURE;
	}

	//If new node get created, then update data + link//
	new->data = data;
	new->link = NULL;

	//If list is empty//
	if (*head == NULL)
	{
		//Add new node to first position//
		*head = new;
		return SUCCESS;
	}

	//Else//
	//Temp points to first node//
	Slist *temp = *head;

	//Traverse to next node and checks next node is present or not//
	while (temp->link != NULL)
	{
		temp = temp->link;
	}

	//Establish the link between last and new node//
	temp->link = new;

	return SUCCESS;
}
