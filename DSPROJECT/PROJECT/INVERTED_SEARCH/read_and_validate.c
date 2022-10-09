/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include "main.h"
int read_and_validate_args(char *argv[], f_list **head)
{
    FILE *fptr;
    if(argv[1] != NULL)
    {
	for(int i = 1; argv[i]; i++)
	{
	    if(is_it_duplicate(head, argv[i]) == DATA_NOT_FOUND)
	    {
	    fptr = fopen(argv[i],"r");
	    if(fptr == NULL)
	    {
		perror("fopen");
		fprintf(stderr, "ERROR: Unable to open file %s\n", argv[i]);
	    }
	    else
	    {
		fseek(fptr,0,SEEK_END);
		if(ftell(fptr) == 0)
		    printf("ERROR: File %s is empty\n", argv[i]);
		else
		{
		    if(insert_at_last(head, argv[i]) == SUCCESS)
			printf("Successful: inserting file name: %s in to file linked list\n", argv[i]);
		    else
			printf("ERROR: unable to add %s in to file linked list\n",argv[i]);
		}
	    }
	    }
	    else
	    {
		printf("ERROR: File name %s in argument no %d is already inserted\n",argv[i],i);
	    }
	}
    }
    else
    {
	printf("ERROR: Command line arguments/inputs are not present\n");
	printf("USAGE: ./inverted_search file1.txt file2.txt\n");
	return FAILURE;
    }

    return SUCCESS;
}
