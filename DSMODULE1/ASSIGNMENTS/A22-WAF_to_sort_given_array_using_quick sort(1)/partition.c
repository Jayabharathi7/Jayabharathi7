#include "main.h"

//Function to partition the array//
int partition(int *arr, int first, int last)
{
    int pivot = first, p = first, q = last, temp;
    //Loop will iterate upto p greater than q//
    while(p <= q)       
    {
            //For every iteration p value incremented upto p value greater than pivot value//
	    while(arr[p] <= arr[pivot])  
	        p++;
	    //For every iteration q value decremented upto q value lesser than pivot value//    
	    while(arr[q] > arr[pivot]) 
	        q--;
	    //After the termination of loops checking q is lesser than p//    
	    if(q > p)
	    {
	        //If it is, p and q value get swapped//
	        temp = arr[p];  
	        arr[p] = arr[q];
	        arr[q] = temp;
	    }
    }
    //After termination of outer loop, checking q is not equal to pivot value or not//
    if(q != pivot)  
    {
            //If it is, p and pivot value get swapped//
	    temp = arr[q]; 
	    arr[q] = arr[pivot];
	    arr[pivot] = temp;
    }
    return q;
}
