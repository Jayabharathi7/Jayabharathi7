#include "sll.h"
//Function to get the middle of the linked list//
int find_mid(Slist *head, int *mid) 
{
   //Checking list is empty or not//
   if(head == NULL)           
       return LIST_EMPTY;
   //Two pointers is used to find middle element//    
   Slist *prev = head;      
   Slist *curr = head;
   while(curr != NULL && curr->link != NULL)  
   {
       //This pointer will move alternatively for every iteration//
       curr = curr -> link -> link; 
       prev = prev -> link; 
   }
   return prev -> data;
} 
