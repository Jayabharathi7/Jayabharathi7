#include "tree.h"

int total_nodes(Tree_t *root)
{
    if(root == NULL)
	    return 0;
    else
    {
            //Function will call recursively with left child address//
	    int count_l = total_nodes(root -> left); 
	    //Function will call recursively with right child address//
	    int count_r = total_nodes(root -> right); 
	    //Updated count value will be returned//
	    return (count_l+count_r+1);  
    }
}
