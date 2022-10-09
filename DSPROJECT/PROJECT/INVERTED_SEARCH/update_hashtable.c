/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include "main.h"

int update_hashtable(hash_t *arr,int index,int f_count,char *word_update,int w_count,char *file_update)
{


    if(arr[index].hash_link == NULL)
    {
	main_n* main_new = malloc(sizeof(main_n));
	if(main_new == NULL)
	    return FAILURE;
	sub* sub_new = malloc(sizeof(sub));
	if(sub_new == NULL)
	    return FAILURE;
	sub_new -> word_count = w_count;
	strcpy(sub_new -> file_name, file_update);
	sub_new -> sub_link = NULL;
	main_new -> s_link = sub_new;

	main_new -> file_count = f_count;
	strcpy(main_new -> word, word_update);
	main_new -> main_link = NULL;

	arr[index].hash_link = main_new;
	return SUCCESS;
    }

    main_n* temp1 = arr[index].hash_link, *prev, *prev1;
    while(temp1)
    {
	if(strcmp(temp1 -> word, word_update) == 0)
	{
	    sub *temp2 = temp1 -> s_link;

	    while(temp2 -> sub_link)
	    {
		temp2 = temp2 -> sub_link;
	    }
	sub* sub_new = malloc(sizeof(sub));
	if(sub_new == NULL)
	    return FAILURE;
	sub_new -> word_count = w_count;
	strcpy(sub_new -> file_name, file_update);
	sub_new -> sub_link = NULL;
	temp2 -> sub_link = sub_new;
	return SUCCESS;
	}

	prev = temp1;
	temp1 = temp1 -> main_link;
    }
	main_n* main_new = malloc(sizeof(main_n));
	if(main_new == NULL)
	    return FAILURE;
	sub* sub_new = malloc(sizeof(sub));
	if(sub_new == NULL)
	    return FAILURE;
	sub_new -> word_count = w_count;
	strcpy(sub_new -> file_name, file_update);
	sub_new -> sub_link = NULL;
	main_new -> s_link = sub_new;

	main_new -> file_count = f_count;
	strcpy(main_new -> word, word_update);
	main_new -> main_link = NULL;

	prev -> main_link = main_new;
	return SUCCESS;
}

