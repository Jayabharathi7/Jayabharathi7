/*
NAME              : JAYABHARATHI J
DATE              : 29/09/2022
DESCRIPTION       : A26 - WAF to find the height & the number of nodes in the given tree.
SAMPLE I/P and O/P:
1. Insert BST
2. In order Traversal
3. Find no of nodes
4. Find height
5. Exit
Enter the option: 1
Enter the data to insert into the BST : 30
1
Enter the data to insert into the BST : 20
1
Enter the data to insert into the BST : 25
1
Enter the data to insert into the BST : 45
1
Enter the data to insert into the BST : 55
2
20 25 30 45 55
3
INFO : Total no.of nodes are 5
4
INFO : Height of the tree is 2
5

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

	printf("1. insert BST\n2. in order Traversal\n3. Find no of nodes\n4. Find height\n5.Exit\n");
	printf("Enter the option: ");
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
				
			    if ((result = total_nodes(root)) == 0)
			    {
			        printf("INFO : Tree is empty\n");
			    }
				else
				    printf("INFO : Total no.of nodes are %d\n", result);
			            
				break;
			case 4:
			
			    if ((result = find_height(root)) == -1)
			    {
			        printf("INFO : Tree is empty\n");
			    }
			    else
			    {
			        printf("INFO : Height of the tree is %d\n", result+1);
			    }
			    break;
			case 5:
				
			    return SUCCESS;
				break;
			
			default:
				printf("Invalid Option\n");
		}

		//If user press y means loop will continue//
	}
	return 0;
}



