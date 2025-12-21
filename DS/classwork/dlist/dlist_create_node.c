#include"dlist.h"
dlist_t * dlist_create_node(int data)
{
    dlist_t *ptr=(dlist_t *)malloc(sizeof(dlist_t));
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=NULL;
    return ptr;
}

