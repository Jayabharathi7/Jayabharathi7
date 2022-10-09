#include "tree.h"

//Function to print the tree in post order//
int postorder(Tree_t *root)
{
    //Checking root is reaching last node or not//
    if(root != NULL) 
    {
            //Function call recursively with left child address//
	    postorder(root -> left); 
	    //Function call recursively with right child address//
	    postorder(root -> right);
	    printf("%d ",root -> data);
    }
}
