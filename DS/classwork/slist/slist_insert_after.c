#include"slist.h"
void slist_insert_after(slist_t *head,int element,int val)
{
    if(head == NULL)
    {
	printf("empty");
	return;
    }
    slist_t *temp=head;
    while(temp->data != element)
    {
	temp=temp->link;
    }
    slist_t *new=slist_create_node(val);
    new->link=temp->link;
    temp->link=new;
}
