#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SUCCESS 0
#define FAILURE 1
#define DATA_FOUND 2
#define DATA_NOT_FOUND 3

#define NAME_LENGTH 10
#define WORD_LENGTH 20

//structure for file linked list
typedef struct file_node
{
    char f_name[NAME_LENGTH];
    struct file_node *f_link;
}f_list;

//structre for sub node
typedef struct sub_node
{
    int word_count;
    char file_name[NAME_LENGTH];
    struct sub_node *sub_link;

}sub;

//structure for main node
typedef struct main_node
{
    int file_count;
    char word[WORD_LENGTH];
    sub * s_link;
    struct main_node *main_link;

}main_n;

typedef struct hash_table
{
    int value;
    main_n *hash_link;
}hash_t;

int status_flag;
//function prototype for read and validate command line arguments
int read_and_validate_args(char *argv[], f_list **head);

//function prototypes for create database
int insert_at_last(f_list **head, char *argv);
int is_it_duplicate(f_list **head, char *argv);
int create_HT(hash_t *HT);
int create_database(f_list *head, hash_t *hash_arr);
int insert_hashtable(hash_t *arr, char* element, char* filename);

//function prototype for display database
int display_database(hash_t *arr);

//function prototype for save database
int save_database(hash_t *arr);

//function prototype for search database
int search_database(hash_t *arr);

//function prototype for update database
int update_database(hash_t *arr);
int update_hashtable(hash_t *arr,int index,int f_count,char *word_update,int w_count,char *file_update);
#endif

