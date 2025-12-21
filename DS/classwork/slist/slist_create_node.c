#include"slist.h"
slist_t *slist_create_node(int data)
{
    slist_t *ptr=(slist_t *)malloc(sizeof(slist_t));
    ptr->data=data;
    ptr->link=NULL;
    return ptr;
}	    
