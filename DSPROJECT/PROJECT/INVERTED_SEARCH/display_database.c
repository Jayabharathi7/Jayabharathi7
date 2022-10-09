/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include"main.h"

int display_database(hash_t *arr)
{
    int flag = 1;
    printf("[INDEX]\t\t\t[FILE COUNT]\t\t[WORD]\t\t\t[WORD COUNT]\t\t[FILENAME]\n");

    for(int i = 0; i < 27; i++)
    {
	if(arr[i].hash_link != NULL)
	{
	    main_n* temp1 = arr[i].hash_link;
	    while(temp1)
	    {
		printf("%d\t\t\t%d\t\t\t%s\t\t\t",i,temp1 -> file_count,temp1 -> word);
		sub* temp2 = temp1 -> s_link;
		while(temp2)
		{
		    if(flag)
		    {
			flag = 0;
			printf("%d\t\t\t%s\n",temp2 -> word_count,temp2 -> file_name);
		    }
		    else
			printf("\t\t\t\t\t\t\t\t\t%d\t\t\t%s\n",temp2 -> word_count,temp2 -> file_name);

		    temp2 = temp2 -> sub_link;
		}
		flag = 1;
		temp1 = temp1 -> main_link;
	    }
	}

    }
}
