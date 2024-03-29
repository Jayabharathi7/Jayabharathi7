#ifndef SLL_H
#define SLL_H

//Standard header//
#include<stdio.h>
#include<stdlib.h>

//Macros//
#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2

typedef int data_t;
typedef struct node
{
	int data;
	struct node *link;
}Slist;

//Function declaration//
int insert_at_last(Slist **head, int data);
int sorted_merge(Slist **head1, Slist **head2);
int sort(Slist **head);
void print_list(Slist *head);

#endif
