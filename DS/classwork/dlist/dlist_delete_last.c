#include"dlist.h"
void dlist_delete_last(dlist_t **head)
{
    if(*head ==NULL)
    {
	printf("empty in node");
	return;
    }
    dlist_t *temp=*head;
    while(temp->next != NULL)
    {
	temp=temp->next;
    }
    if(temp->prev == NULL)
    {
	*head=NULL;
	free(temp);
	return;
    }
    temp->prev->next=NULL;
    free(temp);
}



