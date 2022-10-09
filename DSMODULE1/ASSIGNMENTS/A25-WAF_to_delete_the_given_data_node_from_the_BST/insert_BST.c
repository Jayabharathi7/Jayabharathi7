#include "tree.h"

//Function to insert the data's in BST//
int insert_into_BST(Tree_t **root, int data)
{
    //New node is created dynamically//
    Tree_t *new = malloc(sizeof(Tree_t));  
    //Checking new node is created or not//
    if(new == NULL)                   
	    return FAILURE;
    new -> data = data;
    //New node is updated//
    new -> left = NULL;      
    new -> right = NULL;
    //Checking tree is empty or not//
    if(*root == NULL)       
    {
	    *root = new;             
	    return SUCCESS;
    }
    Tree_t *temp = *root, *parent;
    int flag;
    //Temp will traverse upto leaf of tree//
    while(temp)   
    {
	    parent = temp;
	    //Checking data is less than particular node data or not//
	    if(data < temp -> data) 
	    {
	        //If it is, it will traverse through left//
	        temp = temp -> left; 
	        flag = 1;
	    }
	    //Checking given data is greater than particular node data or not//
	    else if(data > temp -> data)  
	    {
	        //If it is, it will traverse through right//
	        temp = temp -> right;
	        flag = 0;
	    }
	    else
	        //If it is equal, it will return duplicate//
	        return DUPLICATE; 
    }
    if(flag)
            //New node will be inserted//
	    parent -> left = new;  
    else
	    parent -> right = new;
    return SUCCESS;
}

