#include"dlist.h"
void dlist_print(dlist_t *head)
{
    if(head == NULL)
    {
	printf("empty");
	return;
    }
    dlist_t *temp=head;
    while(temp != NULL)
    {
	printf("%d->",temp->data);
	temp=temp->next;
    }
    printf("NULL");
}
