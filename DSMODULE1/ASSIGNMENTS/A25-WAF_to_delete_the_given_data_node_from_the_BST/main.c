/*
NAME              : JAYABHARATHI J
DATE              : 29/09/2022
DESCRIPTION       : A25 - WAF to delete the given data node from the BST
SAMPLE I/P and O/P:
1
Enter the data to insert into the BST : 12
1
Enter the data to insert into the BST : 33
1
Enter the data to insert into the BST : 22
1
Enter the data to insert into the BST : 21
1
Enter the data to insert into the BST : 33
INFO : Duplicate found
2
12 21 22 33 
3
Enter the data to be deleted: 22
INFO : Element deleted successfully
2
12 21 33 
4
*/

#include "tree.h"

int status;

int main()
{
	//Initializing the root with NULL//
	Tree_t *root = NULL;
	int result;
	//Declaring the variables//
	int option, data;

	//printf("1. insert BST\n2. in order Traversal\n3.BST Delete\n4.Exit\n");
	//printf("Enter the option: ");
	while (1)
	{
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				//Reading the data from the user//
				printf("Enter the data to insert into the BST : ");
				scanf("%d", &data);

				//Calling the function to insert the element//
				if ((result = insert_into_BST(&root, data)) == DUPLICATE)
				{
					printf("INFO : Duplicate found\n");
				}
				else if (result == FAILURE)
				{
					printf("INFO : Node not created\n");
				}
				break;
			case 2:
				//Function to Printing the data in in-order form//
				inorder(root);
				printf("\n");
				break;

			case 3:
				//Function to delete the data from the tree//
				printf("Enter the data to be deleted: ");
				scanf("%d", &data);
				if (root)
				{
			        root = delete_BST(root, data);
			        if (status)
			            printf("INFO : Element deleted successfully\n");
			        else
			            printf("INFO : Element not found\n");
				}
				else
				    printf("INFO : Tree is empty\n");
			            
				break;
			case 4:
				
			    return SUCCESS;
				break;
			
			default:
				printf("Invalid Option\n");
		}

		//If user press y means loop will continue//
	}
	return 0;
}
