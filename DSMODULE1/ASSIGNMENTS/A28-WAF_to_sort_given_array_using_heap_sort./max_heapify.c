#include "main.h"

//Function to check the number is minimum or maximum to decide the position//
void max_heap(int *heap, int i, int size)
{
    int large, temp;
    //Index of left and right child will be calculated with respect to i//
    int L = 2*i+1;         
    int R = 2*i+2;
    //Checking parent value is lesser than left child value or not//
    if(heap[i] < heap[L] && L < size) 
            //If it is large is pointing to left child//
	    large = L;     
    else
            //Else large is pointing to parent node//
	    large = i; 
    //Checking large value is lesser than right child value or not//	    
    if(heap[large] < heap[R] && R < size)  
            //If it is large is pointing to right child//
	    large = R;   
    //Checking index and large are equal or not//	    
    if(i != large)  
    {
            //If it is not equal, swapping occurs//
	    temp = heap[large]; 
	    heap[large] = heap[i];
	    heap[i] = temp;
	    //Then function will call recursively//
	    max_heap(heap, large, size); 
    }
}
