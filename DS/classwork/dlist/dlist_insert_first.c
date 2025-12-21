#include"dlist.h"
void dlist_insert_first(dlist_t **head,int data)
{
    if(*head == NULL)
    {
	*head=dlist_create_node(data);
	return;
    }
	dlist_t *new = dlist_create_node(data);
	(*head)->prev=new;
	new->next=*head;
	*head=new;
	return;

/*	new->next=*head;
	new->next->prev=new;
	*head=new;*/
}
