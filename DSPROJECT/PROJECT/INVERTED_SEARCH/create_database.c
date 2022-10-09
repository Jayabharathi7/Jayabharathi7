/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include "main.h"

int create_database(f_list *head, hash_t *hash_arr)
{
    if(status_flag == 0)
	create_HT(hash_arr);
    char word_buffer[1000];
    FILE *fptr;
    while(head)
    {
	fptr = fopen(head -> f_name,"r");
	while(1)
	{
	    fscanf(fptr, "%s", word_buffer);
	    if(feof(fptr))
		break;
	    insert_hashtable(hash_arr, word_buffer, head -> f_name);
	}


	head = head -> f_link;
    }



    return SUCCESS;
}
