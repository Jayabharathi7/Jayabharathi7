#include "tree.h"

//Iteratively//
int search_BST(Tree_t * root, int data)
{
    //Checking tree is empty or not//
    if(root == NULL)   
	    return FAILURE;
    Tree_t *temp = root;
    while(temp)
    {
            //Checking data is less than particular node//
	    if(data < temp -> data)  
	        //If it is, it will traverse through left//
	        temp = temp -> left;   
	    //Checking data is greater than particular node//    
	    else if(data > temp -> data)
	        //If it is, it will traverse through right//
	        temp = temp -> right;  
	    else
	        //If data is equal with particular node, it will return success//
	        return SUCCESS;      
    }
    return NOELEMENT;
}
