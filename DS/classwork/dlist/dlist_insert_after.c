#include"dlist.h"
void dlist_insert_after(dlist_t *head,int element,int data)
{
    if(head == NULL)
    {
	printf("empty");
	return;
    }
    dlist_t *temp=head;
    while(temp->data != element)
    {
	temp=temp->next;
    }
    dlist_t *new=dlist_create_node(data);
    new->prev=temp;
    new->next=temp->next;
    temp->next->prev=new;
    temp->next=new;
}
