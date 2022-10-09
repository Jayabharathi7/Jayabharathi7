#include "sll.h"
//Function//                             
int sort(Slist **head)      
{
    if (*head == NULL)   
    {
        //If empty return failure//
	return LIST_EMPTY;           
    }
    //If list is not empty//
    else               
    {
	Slist *prev = *head;         
	Slist *temp = *head;         
	Slist *next = temp -> link;   
	int count = 1; 
	//Traversing the link to find the count//                
	while (temp -> link != NULL) 
	{
	    //Increment the count//
	    count++;                    
	    //Update the temp//
	    temp = temp -> link;      
	}
	temp = *head;                       
	for (int i =0; i < count; i++)
	{
	    //Prev is NULL//
	    prev = NULL;      
	    //Temp is head//
	    temp = *head;               
	    //New is temp to link//
	    next = temp -> link;          
	    //For j loop run upto count -i - 1//
	    for (int j = 0; j < count - i - 1 ; j++)  
	    {
	        //Check the condition of a temp to data is greater than next to data//
		if (temp -> data > next -> data)     
		{
		  //Check the j is 0//
		  if (j == 0)                         
	 	  {
	 	      //Update the head//
		      *head = next;                  
		  }
		  else                            
		  {
		      //Update the prev to link is next// 
		      prev -> link = next;      
		  }
		  //Update the temp, next and prev//
		  temp -> link = next -> link;  
	          next -> link = temp;
		  prev = next;
		  next = temp -> link;
		}
		else                      
		{
		    //Update the prev, temp and next//
		    prev = temp;        
		    temp = next;
		    next = temp -> link;
		}
	    }
	}                     
    }
    return SUCCESS;
}

