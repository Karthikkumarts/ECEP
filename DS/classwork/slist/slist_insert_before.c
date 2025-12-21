#include"slist.h"
void slist_insert_before(slist_t *head,int element,int val)
{
    if(head == NULL)
    {
	printf("empty");
    }
    slist_t *temp=head;
    slist_t *prev=NULL;
    while(temp->data != element)
    {
	prev=temp;
	temp=temp->link;
    }
    slist_t *new=slist_create_node(val);
    prev->link=new;
    new->link=temp;
}


