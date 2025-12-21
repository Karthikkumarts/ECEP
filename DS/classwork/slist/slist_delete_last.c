#include"slist.h"
slist_delete_last(slist_t **head,int val)
{
    if(*head == NULL)
    {
	printf("list is empty");
    }
   slist_t *temp,*prev=NULL;
   temp=*head;
   while(temp->link != NULL)
   {
       prev=temp;
       temp = temp->link;
   }
   free(temp);
   if(prev ==NULL)
   {
       *head=NULL; // if there is only one node
   }
   else
   {
   prev->link=NULL;
   }
}
