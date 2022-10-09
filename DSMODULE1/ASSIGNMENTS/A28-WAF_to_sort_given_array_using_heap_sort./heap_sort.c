#include "main.h"

//Function to sort the array using heap sort//
int heap_sort(int *heap, int size )
{
    int index, temp;
    //Function call to make maxheap//
    build_maxheap(heap, size);
    index = size - 1;
    while(index >= 0)
    {
            //Swapping of elements//
	    temp = heap[0];     
	    heap[0] = heap[index];
	    heap[index] = temp;
	    //Function call to heapify the tree//
	    max_heap(heap,0,index); 
	    //Index will be decremented//
	    index--; 
    }


}        
