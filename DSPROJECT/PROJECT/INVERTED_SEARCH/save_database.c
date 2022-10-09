/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include"main.h"

int save_database(hash_t *arr)
{
    int flag = 1, flag1 = 1;
    char file[10];
    printf("Enter the file name for back up:");
    scanf("%s", file);
    FILE *fptr;
    fptr = fopen(file, "w+");
    if (fptr == NULL)
    {
	perror("fopen");
	fprintf(stderr, "ERROR: Unable to open file %s\n", file);

	return FAILURE;
    }
    for(int i = 0; i < 27; i++)
    {
	if(arr[i].hash_link != NULL)
	{
	    fprintf(fptr,"#");
	    main_n* temp1 = arr[i].hash_link;
	    while(temp1)
	    {
		if(flag1)
		{
		    flag1 = 0;
		    fprintf(fptr,"%d\n",i);
		}
		fprintf(fptr,"%d;%s;",temp1 -> file_count,temp1 -> word);
		sub* temp2 = temp1 -> s_link;
		while(temp2)
		{
		    if(flag)
		    {
			flag = 0;
			fprintf(fptr,"%d;%s;\n",temp2 -> word_count,temp2 -> file_name);
		    }
		    else
		    {
			fprintf(fptr,"\n%d;%s;",temp1 -> file_count,temp1 -> word);
			fprintf(fptr,"%d;%s;\n",temp2 -> word_count,temp2 -> file_name);

		    }

		    temp2 = temp2 -> sub_link;
		}
		flag = 1;
		temp1 = temp1 -> main_link;
	    }
	    flag1 = 1;
	    fprintf(fptr,"#\n");
	}

    }
    return SUCCESS;
}

