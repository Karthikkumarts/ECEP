#include"dlist.h"
void dlist_delete_first(dlist_t **head)
{
    if(*head == NULL)
    {
	printf("empty in node");
	return;
    }
   dlist_t *temp=*head;
  /*  temp->next->prev=NULL;
    *head=temp->next;*/
   if(temp->prev == NULL)
   {
       *head=temp->next;
    free(temp);
   }

} 
