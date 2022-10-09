#include "tree.h"

int findmin(Tree_t * root)
{
    //Checking tree is empty or not//
    if(root == NULL) 
	    return FAILURE;
    //It will traverse upto leftmost node//	    
    while(root->left)
    {
	    root = root -> left;
    }
    //It will return leftmost data//
    return root -> data;
}

