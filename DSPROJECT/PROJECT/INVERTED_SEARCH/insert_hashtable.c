/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include"main.h"

int insert_hashtable(hash_t *arr, char* element, char* filename)
{
    int index = tolower(element[0]) % 97;
    if(tolower(element[0]) < 97 || tolower(element[0]) > 122)
	index = 26;

    if(arr[index].hash_link == NULL)   
    {
	main_n *main_new = malloc(sizeof(main_n));
	if(main_new == NULL)
	    return FAILURE;
	main_new -> file_count = 1;
	strcpy(main_new -> word, element);
	main_new -> main_link = NULL;

	sub *sub_new = malloc(sizeof(sub));
	if(sub_new == NULL)
	    return FAILURE;
	sub_new -> word_count = 1;
	strcpy(sub_new -> file_name, filename);
	sub_new -> sub_link = NULL;

	main_new -> s_link = sub_new;
	arr[index].hash_link = main_new;
	return SUCCESS;
    }
    main_n *temp1 = arr[index].hash_link, *prev;
    while(temp1)
    {
	if(strcmp(temp1 -> word, element) == 0)
	{
	    sub *temp2 = temp1 -> s_link, *prev1;

	    while(temp2)
	    {
		if(strcmp(temp2 -> file_name, filename) == 0)
		{
		    ++(temp2 -> word_count);
		    return SUCCESS;
		}
		prev1 = temp2;

		temp2 = temp2 -> sub_link;
	    }
	    sub *sub_new = malloc(sizeof(sub));
	    if(sub_new == NULL)
		return FAILURE;
	    sub_new -> word_count = 1;
	    strcpy(sub_new -> file_name, filename);
	    sub_new -> sub_link = NULL;

	    prev1 -> sub_link = sub_new;
	    (temp1 -> file_count)++;
	    return SUCCESS;

	}

	prev = temp1;
	temp1 = temp1 -> main_link;

    }
    main_n *main_new = malloc(sizeof(main_n));
    if(main_new == NULL)
	return FAILURE;
    main_new -> file_count = 1;
    strcpy(main_new -> word, element);
    main_new -> main_link = NULL;

    sub *sub_new = malloc(sizeof(sub));
    if(sub_new == NULL)
	return FAILURE;
    sub_new -> word_count = 1;
    strcpy(sub_new -> file_name, filename);
    sub_new -> sub_link = NULL;

    main_new -> s_link = sub_new;
    prev -> main_link = main_new;
    return SUCCESS;
}
