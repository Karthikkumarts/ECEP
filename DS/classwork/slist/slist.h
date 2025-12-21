#ifndef SLIST_H
#define SLIST_H
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *link;
}slist_t;

slist_t *slist_create_node(int);
void slist_insert_first(slist_t **,int);
void slist_insert_last(slist_t **,int);
void slist_insert_after(slist_t *,int,int);
void slist_insert_before(slist_t *,int,int);
void slist_delete_first(slist_t **);
void slist_delete_last(slist_t **);
void slist_print(slist_t *);

#endif
