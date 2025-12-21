#ifndef DLIST_H
#define DLIST_H
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next,*prev;
}dlist_t;

dlist_t *dlist_create_node(int);
void dlist_insert_first(dlist_t **,int);
void dlist_insert_last(dlist_t **,int);
void dlist_insert_after(dlist_t *,int,int);
void dlist_insert_before(dlist_t *,int,int);
void dlist_delete_first(dlist_t **);
void dlist_delete_last(dlist_t **);
void dlist_print(dlist_t *);

#endif
