/*
NAME: JAYABHARATHI J
DATE: 07/10/2022
DESCRIPTION: Inverted search
SAMPLE I/P:
SAMPLE O/P:
 */
#include "main.h"

int main(int argc, char *argv[])
{
    int option, status = 0;
    f_list *head = NULL;
    hash_t arr_hash[27];        //decleration for hash table
    if(read_and_validate_args(argv, &head) == SUCCESS)
    {
	if(head != NULL)
	{
	while(1)
	{

	    printf("1.Create database\n2.Display database\n3.Save database\n4.Update database\n5.Search database\n6.Exit\nEnter your choice:");
	    scanf("%d",&option);

	    switch(option)
	    {
		case 1:
		if(create_database(head,arr_hash) == SUCCESS)
		{
		    printf("\n***INFO: Database created successfully***\n\n");
		    status = 1;
		    status_flag = 1;

		}
		else
		{
		    printf("ERROR: Database creation failed\n");
		}
		break;
		case 2:
		if(status)
		    display_database(arr_hash);
		else
		    printf("ERROR: Database is empty\n");
		break;

		case 3:
		if(status)
		{
		    if(save_database(arr_hash) == SUCCESS)
		    {
			printf("\n***INFO: Database saved successfully***\n\n");
		    }

		}
		else
		    printf("ERROR: Database is empty\n");
		break;

		case 4:
		if(update_database(arr_hash) == SUCCESS)
		{
		    printf("\n***INFO: Database updated successfully***\n\n");
		    status = 1;
		    status_flag = 1;
		}
		break;


		case 5:
		if(status)
		{
		    if(search_database(arr_hash) == DATA_NOT_FOUND)
			printf("\n!!!INFO: Entered data is not found in database\n\n");

		}
		else
		    printf("ERROR: Database is empty\n");
		break;
		


		case 6:
		return SUCCESS;
		default:
		 printf("ERROR: !!!Invalid option!!!");
	    }
	}
	}
	else
	    printf("ERROR: File linked list is empty\n");

    }
    else
    {
	printf("ERROR: Read and validation of arguments failed\n");
    }



}
