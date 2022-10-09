#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    	//Allocating the memory for new node//
	Stack_t *new = malloc(sizeof(Stack_t));

	//Check whether new node created or not//
	if (new == NULL)
	{
		return FAILURE;
	}

	//Update the parts of the node//
	new->data = data;
	new->link = NULL;

	//If list is empty//
	if (*top == NULL)
	{
		//If *top is empty, then create the first node//
		*top = new;
		return SUCCESS;
	}
	else
	{
		//*Top is not empty, then store value i.e link in the temp variable//
		Stack_t *temp = *top;

		//Storing that new link in the top inserting the element at first//
		*top = new;

		//Creating the link to next data//
		new -> link = temp;
	}

	return SUCCESS;

}
