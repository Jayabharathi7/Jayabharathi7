#include "tree.h"

Tree_t* findmin(Tree_t * root)
{
    Tree_t *temp = root;
    //It will traverse upto leftmost node//
    while(temp && temp -> left) 
    {
	    temp = temp -> left;
    }
    //It will return leftmost data//
    return temp;
}
