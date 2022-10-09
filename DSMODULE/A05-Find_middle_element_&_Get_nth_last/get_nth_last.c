#include "sll.h"
//Function to get the nth node from the last of a linked list//
int find_nth_last(Slist *head, int pos, int *data) 
{
   if(pos == 0)
      return FAILURE;
   //Checking list is empty or not//   
   if(head == NULL)        
      return LIST_EMPTY; 
   Slist *temp1 = head;
   Slist *temp2 = head;
   //This for loop is used to move the pointer temp1 to pos with respect to first node//
   for(int i = 1; i < pos; i++) 
   {
       temp1 = temp1 -> link;
       if(temp1 == NULL)
	   return FAILURE;
   }
   //This loop will move the pointer temp1 to last node along with temp2//
   while(temp1 -> link)   
   {
       temp1 = temp1 -> link;  
       temp2 = temp2 -> link;
   }
   //After the termination of while loop, the pointer temp2 will be located at given position//
   return temp2 -> data;   

} 
