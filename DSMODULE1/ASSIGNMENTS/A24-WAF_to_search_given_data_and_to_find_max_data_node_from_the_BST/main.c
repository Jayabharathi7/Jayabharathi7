/*
NAME              : JAYABHARATHI J
DATE              : 29/09/2022
DESCRIPTION       : A24 - WAF to search given data and to find max data node from the BST
SAMPLE I/P and O/P:
1. Insert BST
2. In order Traversal
3. Pre order Traversal
4. Post order Traversal
5. BST Search
6. Find minimum
7. Find maximum
Enter the option: 1
Enter the data to insert into the BST : 30
1
Enter the data to insert into the BST : 20
1
Enter the data to insert into the BST : 40
1
Enter the data to insert into the BST : 10
1
Enter the data to insert into the BST : 25
1
Enter the data to insert into the BST : 35
1
Enter the data to insert into the BST : 55
2
10 20 25 30 35 40 55 
3
30 20 10 25 40 35 55 
4
10 25 20 35 55 40 30 
6
INFO : Minimum value in the tree is 10
*/

#include "tree.h"

int main()
{
	//Initializing the root with NULL//
	Tree_t *root = NULL;
	int result;
	//Declaring the variables//
	int option, data;

//	printf("1. insert BST\n2. in order Traversal\n3. pre order Traversal\n4. post order Traversal\n5. BST Search\n6. Find minimum\n7. Find maximum\n8.exit\n");
//	printf("Enter the option: ");
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
				//Function to Printing the data in pre-order form//
				preorder(root);
				printf("\n");
				break;
			case 4:
				//Function to Printing the data in post-order form//
				postorder(root);
				printf("\n");
				break;
			
			case 5:
				printf("Enter the element to be searched: ");
				scanf("%d", &data);
				result = search_BST(root, data);
				if (result == NOELEMENT)
				{
					printf("INFO : Data not found\n");
				}
				else if (result == FAILURE)
				{
				    printf("INFO : Tree is empty\n");
				}
				else
				{
					printf("INFO : Data found\n");
				}

				break;
			case 6: 
				result = findmin(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Minimum value in the tree is %d\n", result);	
				}
				break;
			case 7: 
				result = findmax(root);
				if (result == FAILURE)
				{
					printf("INFO : Tree is empty\n");
				}
				else
				{
				    printf("INFO : Maximum value in the tree is %d\n", result);	
				}	
				break;
			case 8:
			    return SUCCESS;
			
			default:
				printf("Invalid Option\n");
		}

	        //If user press y means loop will continue//
	}
	return 0;
}



