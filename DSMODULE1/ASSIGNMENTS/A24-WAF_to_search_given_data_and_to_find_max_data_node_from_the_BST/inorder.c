#include "tree.h"

//Function to print the data in inorder printing//
int inorder(Tree_t *root)
{
    //Checking root is reaching last node or not//
    if(root != NULL) 
    {
            //Function call recursively with left child address//
	    inorder(root -> left);  
	    printf("%d ",root -> data);
	    //Function call recursively with right child address//  
	    inorder(root -> right); 
    }
}
