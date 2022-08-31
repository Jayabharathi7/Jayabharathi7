/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
		int i, j;
		char ch;
		for(i = 1; argv[i] != NULL; i++)
		{
				for(j = 0; argv[i][j] != 0; j++)
				{
						putchar(argv[i][j]);
				}
				putchar(32);
		}
}


#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
		char ch;
		FILE *fptr;
		fptr = fopen(argv[1], "r");
		if(fptr != NULL)
		{
				while(ch = fgetc(fptr))
				{
						if(feof(fptr))
								break;
						putchar(ch);
				}
				fclose(fptr);
		}
		else
				printf("File not exist\n");
}


#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argc)
{
		char ch;
		FILE *fptr1, *fptr2;
		fptr1 = fopen(argv[1], "r");
		if(fptr1 != NULL)
		{
				fptr2 = fopen(argv[2], "w");
				while(ch = fgetc(fptr1))
				{
						fputc(ch, fptr2);
						if(feof(fptr1))
								break;
				}
				fclose(fptr1);
				fclose(fptr2);
				printf("File copied\n");
		}
		else
				printf("%s File not exist", argv[1]);
}



#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
		int flag = 1;
		char ch;
		FILE *fptr1, *fptr2, *fptr3;
		fptr1 = fopen(argv[1], "r");
		fptr2 = fopen(argv[2], "r");
		if((fptr1 != NULL) && (fptr2 != NULL))
		{
				fptr3 = fopen(argv[3], "w");
				while(ch = fgetc(fptr1))
				{
						if(feof(fptr1))
						{
								if(flag)
								{
										flag = 0;
										fptr1 = fptr2;
								}
								else
										break;
						}
						fputc(ch, fptr3);
				}
				fclose(fptr1);
				fclose(fptr3);
				printf("File copied\n");
		}
		else
				printf("%s File not exist", argv[1]);
}



#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
		char ch;
		FILE *fptr;
		fptr = fopen(argv[1], "r");
		if(fptr != NULL)
		{
				while(ch = fgetc(fptr))
				{
						if(feof(fptr))
								break;
				}
				printf("%zu", ftell(fptr));
				fclose(fptr);
				putchar('\n');
		}
		else
				printf("File not exist");
}


























