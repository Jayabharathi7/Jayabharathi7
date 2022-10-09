#include "tree.h"

extern int status;
//Function to delete the node//
Tree_t * delete_BST(Tree_t * root, int data)
{
    Tree_t*temp;
    //Checking tree is empty or not//
    if(root == NULL)          
	    return root;
    //Checking given data is lesser than current node data or not//	    
    if(data < root -> data)      
	    root -> left = delete_BST(root -> left, data);
    //Checking given data is greater than current node data or not//	    
    else if(data > root -> data)        
	    root -> right = delete_BST(root -> right, data);
    else   
    {
            //This case is for node with only one child and leaf node//
	    if(root -> left == NULL) 
	    {
	        temp = root -> right;
	        free(root);
	        status = 1;
	        return temp;
	    }
	    else if(root -> right == NULL)
	    {
	        temp = root -> left;
	        free(root);
	        status = 1;
	        return temp;
	    }
	    //This case is for node with both child//
	    else           
	    {
	        temp = findmin(root -> right);
	        root -> data = temp -> data;
	        root -> right = delete_BST(root -> right, temp -> data);

	    }
    }
    return root;
}
