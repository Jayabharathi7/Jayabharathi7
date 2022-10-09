/*
NAME: JAYABHARATHI J
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include"main.h"

int search_database(hash_t *arr)
{
    int flag = 1;
    char search_word[20];
    printf("Enter the word to search in database:");
    scanf("%s",search_word);
    int index = tolower(search_word[0])%97;
    if(tolower(search_word[0]) < 97 || tolower(search_word[0]) > 122)
	index = 26;

    if(arr[index].hash_link != NULL)
    {
	main_n* temp1 = arr[index].hash_link;
	while(temp1)
	{
	    if(strcmp(temp1 -> word,search_word) == 0)
	    {
		
		printf("\nEnterd data Found in database\n#%d\n",index);
		printf("%d;%s;",temp1 -> file_count,temp1 -> word);
		sub* temp2 = temp1 -> s_link;
		while(temp2)
		{
		    if(flag)
		    {
			flag = 0;
			printf("%d;%s;\n",temp2 -> word_count,temp2 -> file_name);
		    }
		    else
		    {
			printf("\n%d;%s;",temp1 -> file_count,temp1 -> word);
			printf("%d;%s;\n",temp2 -> word_count,temp2 -> file_name);

		    }

		    temp2 = temp2 -> sub_link;
		}

		printf("#\n\n");
		return DATA_FOUND;
	    }
	    temp1 = temp1 -> main_link;
	}

    }
    return DATA_NOT_FOUND;;
}

