#include "tree.h"

int find_height(Tree_t *root)
{
    if(root == NULL)
	    return FAILURE;
    else
    {
            //Function will call recursively with left child address//
	    int count_l = find_height(root -> left); 
	    //Function will call recursively with right child address//
	    int count_r = find_height(root -> right); 
	    if(count_l > count_r)
	        //Count value will be updated//
	        return (count_l + 1);   
	    else
	        return (count_r + 1);
    }
    
}
