/*
 * NAME       : JAYABHARATHI J
 * DATE       : 06.08.2022
 * DESCRIPTION: WAP TO IMPLEMENT THE STUDENT RECORD USING ARRAY OF STRUCTURES
 * INPUT      :  Test Case 1:
user@emertxe] ./student_record
Enter no.of students : 2
Enter no.of subjects : 2
Enter the name of subject 1 : Maths
Enter the name of subject 2 : Science
----------Enter the student datails-------------
Enter the student Roll no. : 1
Enter the student 1 name : Nandhu
Enter Maths mark : 99
Enter Science mark : 91
----------Enter the student datails-------------
Enter the student Roll no. : 2
Enter the student 2 name : Bindhu
Enter Maths mark : 88
Enter Science mark : 78
----Display Menu----
1. All student details
2. Particular student details
Enter your choice : 2

----Menu for Particular student----
1. Name.
2. Roll no.
Enter you choice : 1
Enter the name of the student : Nandhu
Roll No.   Name           Maths         Science       Average       Grade
1              Nandhu        99               91                95                  A
Do you want to continue to display(Y/y) : n
 * */


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
        char name[50];
        int roll_no;
        float avg;
        char grade;
};
int main()
{
        char op;
        do
        {
                int i, j, sum = 0, choice, choice1, no_stu, no_sub, roll, flag = 1;
                char name1[50];
                printf("Enter no.of students : ");
                scanf("%d",&no_stu);
                printf("Enter no.of subjects : ");
                scanf("%d",&no_sub);
                struct student st[no_stu];
                char *sub[no_sub];
                int mark[no_stu][no_sub];
                for(i = 0; i < no_sub; i++)
	                    sub[i] = malloc(20);
                for(i = 0; i < no_sub; i++)
                {
	                    printf("Enter the name of subject %d : ",i+1);
	                    scanf("%s",sub[i]);
                }
                for(i = 0; i < no_stu; i++)
                {
	                    printf("----------Enter the student datails-------------\n");
	                    printf("Enter the student Roll no. : ");
	                    scanf("%d",&st[i].roll_no);
	                    printf("Enter the student %d name : ",i+1);
	                    scanf("%s",st[i].name);
	                    for(j = 0; j < no_sub; j++)
	                    {
	                            printf("Enter %s mark : ",sub[j]);
	                            scanf("%d",&mark[i][j]);
	                    }
	                    for(j = 0; j < no_sub; j++)
	                            sum = sum + mark[i][j];
	                    st[i].avg = (float)sum/no_sub;
	                    sum = 0;
	                    if(st[i].avg > 90 && st[i].avg < 100)
	                            st[i].grade = 65;
	                    else if(st[i].avg > 80)
	                            st[i].grade = 66;
	                    else if(st[i].avg > 70)
	                            st[i].grade = 67;
	                    else if(st[i].avg > 60)
	                            st[i].grade = 68;
	                    else
	                            st[i].grade = 'F';

                }
                printf("----Display Menu----\n1. All student details\n2. Particular student details\nEnter your choice : ");
                scanf("%d",&choice);
                switch (choice)
                {
	                    case 1:
                                printf("%s\t%s","Roll No.","Name");
	                            for(i = 0; i < no_sub; i++)
		                                printf("\t%s",sub[i]);
	                            printf("\t%s\t%s\n","average","grade");
	                            for(i = 0; i < no_stu; i++)
	                            {
		                                printf("%d\t%s",st[i].roll_no,st[i].name);
		                                for(j = 0; j < no_sub; j++)
		                                        printf("\t%d",mark[i][j]);
		                                printf("\t%f\t%c\n",st[i].avg,st[i].grade);
	                            }
	                            break;
	                    case 2:
	                            printf("----Menu for Particular student----\n1. Name.\n2. Roll no.\nEnter you choice : ");
	                            scanf("%d",&choice1);
	                            switch (choice1)
	                            {
		                                case 1:
		                                        printf("Enter the name of the student : ");
		                                        scanf("%s",name1);
		                                        printf("%s\t%s","Roll No.","Name");
		                                        for(i = 0; i < no_sub; i++)
			                                            printf("\t%s",sub[i]);
		                                        printf("\t%s\t%s\n","average","grade");
		                                        for(i = 0; i < no_stu; i++)
		                                        {
			                                            if(strcmp(name1,st[i].name) == 0)
			                                            {
			                                                    flag = 0;
			                                                    printf("%d\t%s",st[i].roll_no,st[i].name);
			                                                    for(j = 0; j < no_sub; j++)
				                                                        printf("\t%d",mark[i][j]);
			                                                    printf("\t%f\t%c\n",st[i].avg,st[i].grade);
			                                                    break;
			                                            }
		                                        }
		                                        if(flag)
			                                            printf("Enter valid name\n");
                                                break;
		                                case 2:
		                                        printf("Enter the Roll no of the student : ");
		                                        scanf("%d",&roll);
		                                        printf("%s\t%s","Roll No.","Name");
		                                        for(i = 0; i < no_sub; i++)
			                                            printf("\t%s",sub[i]);
		                                        printf("\t%s\t%s\n","average","grade");
		                                        for(i = 0; i < no_stu; i++)
		                                        {
			                                            if(roll == st[i].roll_no)
			                                            {
			                                                    flag = 0;
			                                                    printf("%d\t%s",st[i].roll_no,st[i].name);
			                                                    for(j = 0; j < no_sub; j++)
				                                                        printf("\t%d",mark[i][j]);
			                                                    printf("\t%f\t%c\n",st[i].avg,st[i].grade);
			                                                    break;
			                                            }
		                                        }
		                                        if(flag)
			                                            printf("Enter valid Roll no\n");
			                                    break;
	                                            }
                                break;
                                }
                                for(i = 0; i < no_sub; i++)
	                                    free(sub[i]);
                                getchar();
                                printf("Do you want to continue to display(Y/y) :");
                                scanf("%c",&op);
                                }
		while((op == 'y') || (op == 'Y'));
}





