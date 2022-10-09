#include"hash.h"

int insert_HT(hash_t *arr, int element, int size)
{
    int index = element % size;
    //Checking the node is initialized as -1//
    if(arr[index].value == -1) 
    {
            //If it is element will be stored in that node//
	    arr[index].value = element;
	    return SUCCESS;
    }
    //If already a value is stored, new node is created//
    hash_t *new = malloc(sizeof(hash_t)); 
    if(new == NULL)        
	    return FAILURE;
    //New node data will be updated//	    
    new -> index = index;       
    new -> value = element;
    new -> link = NULL;
    //Checking any node is linked or not with first node//
    if(arr[index].link == NULL)
    {
            //If no node is linked then new node will be linked without traversing//
	    arr[index].link = new;
	    return SUCCESS;
    }
    hash_t *temp = arr[index].link;
    //It will traverse upto last node to perform insert at last//  
    while(temp -> link)  
	    temp = temp->link;
    temp -> link = new;
	    return SUCCESS;
}
