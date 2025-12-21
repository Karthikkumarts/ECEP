#include"dlist.h"
 void dlist_insert_last(dlist_t **head,int data)
{
    if(*head == NULL)
    {
	*head=dlist_create_node(data);
	return;
    }
    dlist_t *temp=*head;
    while(temp->next != NULL)
    {
	temp=temp->next;
    }
    dlist_t *new=dlist_create_node(data);
    new->prev=temp;
    temp->next=new;
    return;
}
