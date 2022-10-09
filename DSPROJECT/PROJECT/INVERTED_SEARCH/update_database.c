/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include"main.h"

int update_database(hash_t *arr)
{
    int index;
    char buffer[100];

    char file[10];
    printf("Enter file name for updating database:");
    scanf("%s",file);
    FILE *fptr = fopen(file,"r");
    if(fptr == NULL)
    {
	printf("%s file doesn't exist in your directory. Check filename again\n", file);
	return FAILURE;
    }
    if(status_flag == 0)
    create_HT(arr);

    while(fscanf(fptr, "%s", buffer) != EOF)
    {
	if(buffer[0] == '#')
	{
	    if(buffer[1] != '\0')
		index = atoi(&buffer[1]);
	}
	else
	{
	    int f_count = atoi(strtok(buffer, ";"));
	    char *word_update = strtok(NULL,";");
	    int w_count = atoi(strtok(NULL,";"));
	    char *file_update = strtok(NULL, ";");
	    update_hashtable(arr,index,f_count,word_update,w_count,file_update);
	}
    }
    return SUCCESS;
}
