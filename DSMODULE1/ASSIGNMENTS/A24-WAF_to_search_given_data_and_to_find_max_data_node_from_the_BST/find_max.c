#include "tree.h"

int findmax(Tree_t * root)
{
    //Checking root is empty or not//
    if(root == NULL)
	    return FAILURE;
    //It will traverse upto rightmost node//	    
    while(root -> right)
    {
	    root = root -> right;
    }
    //Return the rightmost node data//
    return root -> data;
}
