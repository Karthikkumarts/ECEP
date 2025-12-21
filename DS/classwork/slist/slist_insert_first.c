#include"slist.h"
slist_insert_first(slist_t **head,int val)
{
    if(*head == NULL)
    {
	*head=slist_create_node(val);
	return;
    }
    slist_t *new=slist_create_node(val);
    new->link=*head;
   *head=new;
   return;
}
