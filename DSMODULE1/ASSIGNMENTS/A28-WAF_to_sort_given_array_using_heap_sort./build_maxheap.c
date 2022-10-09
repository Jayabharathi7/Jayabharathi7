#include "main.h"

void build_maxheap(int *heap, int size)
{
    //Index value start with some middle of element//
    int index = size/2 - 1;
    while(index >= 0)
    {
            //Function call to heapify the tree//
	    max_heap(heap, index, size);  
	    //Index value will be decremented//
	    index--;     
    }
}
