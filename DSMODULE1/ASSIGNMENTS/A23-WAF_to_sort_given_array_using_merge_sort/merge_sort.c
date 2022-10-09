#include "main.h"

//Function definition//
int merge_sort(int *array, int narray)   
{
    //Declaring the variables//
    int i,mid;         
    if(narray == 1)
         return 1;
    //Here dividing the whole array into 2//
    mid = narray / 2;                   
    //Dynamically allocating the memory for LSA//
    int *LSA = malloc(sizeof(int)*mid);    
    if(LSA == NULL)
         return FAILURE;
    for(i = 0; i <= mid - 1; i++)
    {
         LSA[i]=array[i];
    }
    //Dynamically allocating the memory for RSA//
    int *RSA = malloc(sizeof(int)*(narray - mid));  
    if(RSA == NULL)
         return FAILURE;
    
    for(i = mid; i <= narray - 1; i++)
    {
         RSA[i - mid]=array[i];
    }
    //Function calls//
    merge_sort(LSA,mid);         
    merge_sort(RSA,narray-mid);   
    merge(array,narray,LSA,mid,RSA,(narray-mid)); 
    
}
