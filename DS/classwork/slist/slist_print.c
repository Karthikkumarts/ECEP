#include"slist.h"
void slist_print(slist_t *head)
{

    if(head == NULL)
    {
	printf("list is empty");
	return;
    }

    slist_t *temp= head;

    while(temp != NULL)
    {
	printf("%d->",temp->data);
	temp=temp->link;
    }
    printf("NULL\n");
}
