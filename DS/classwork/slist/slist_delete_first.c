#include"slist.h"
slist_delete_first(slist_t **head)
{
    if(*head==NULL)
    {
	printf("list is empty");
	return;
    }
    slist_t *temp=*head;
    *head = temp->link;
    free(temp);
}
