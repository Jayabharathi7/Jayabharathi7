#include "main.h"

//Function definition//
void merge(int *array, int narray, int *left, int nleft, int *right, int nright)  
{
    //Declaring the variables//
    int i=0,j=0,k=0;             
    //Condition checking//
    while(i<nleft && j<nright)    
    {
        //Condition for LSA and RSA elements checking//
        if(left[i]<right[j])       
        {
            //LSA element is loaded into new array//
            array[k]=left[i];
            //Increments LSA index//
            i++;   
            //Incrementing the new array index//
            k++;            
        }
        else
        {
            //RSA element is loaded into array when if condition fails//
            array[k]=right[j];    
            //Incrementing the RSA index//
            j++;           
            //Incrementing the new array index//
            k++;              
        }
    }
    //Condition for if pending elements are present in RSA//
    while( j < nright)       
    {
        array[k]=right[j];
        k++;
        j++;
    }
    //Condition for pending element in LSA//
    while( i < nleft )          
    {
    array[k] = left[i];
    k++;
    i++;
    }
}
