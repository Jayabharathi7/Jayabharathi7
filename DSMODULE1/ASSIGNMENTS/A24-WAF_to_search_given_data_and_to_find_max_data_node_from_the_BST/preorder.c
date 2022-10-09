#include "tree.h"

//Function to print the tree in pre-order//
int preorder(Tree_t *root)
{
    //Checking root is reaching last node or not//
    if(root != NULL)  
    {
	    printf("%d ", root -> data);
	    //Function call recursively with left child address//
	    preorder(root -> left); 
	    //Function call recursively with right child address//
	    preorder(root -> right);
    }
}
