#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev,*next;
}dlist;

dlist * create_node(int data)
{
    dlist *ptr=(dlist*)malloc(sizeof(dlist));
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=NULL;
}
void dlist_insert_last(dlist **head,int val)
{
    if(*head == NULL)
    {
	*head=create_node(val);
	return;
    }
    dlist *tail;
    dlist *temp=*head;
    while(temp->next != NULL)
    {
	temp=temp->next;
    }
    dlist *new=create_node(val);
    tail=new;
    temp->next=new;
    new->prev=temp;
    return;
}

void dlist_delete_last(dlist **head,int val)
{
  if(*head == NULL)
  {
      printf("empty");
  }
  dlist *temp=*head;
  while(temp->next != NULL)
  {
      temp=temp->next;
  }
  free(temp);
  temp->prev->next=NULL;
}

void dlist_insert_first(dlist **head,int val)
{
if(*head == NULL)
{
    *head=create_node(val);
}
dlist *new=create_node(val);
new->next=*head;
*head=new;
}

void dlist_delete_first(dlist **head,int val)
{
    if(*head ==NULL)
    {
	printf("empty");
    }
    dlist *temp=*head;
    temp->next->prev=NULL;
    *head = temp->next;
    free(temp);
}

void dlist_insert_before(dlist **head,int key,int val)
{
    if(*head == NULL)
    {
	printf("empty");
    }
    dlist *temp=*head;
    while(temp->data != key)
    {
	temp=temp->next;
    }
    dlist *new=create_node(val);
    new->next=temp;
    new->prev=temp->prev;
    temp->prev=new;
    new->prev->next=new;
}
/*void dlist_delete_before(dlist **head,int val)
{
    
    if(*head == NULL)
    {
	printf("empty");
	return;
    }
    dlist *temp=*head;
    while(tem->data != val)
    {
	temp=temp->next;
    }
    temp=
}*/

void dlist_insert_after(dlist *head,int key,int val)
{

    if(head == NULL)
    {
	printf("empty");
	return;
    }
    dlist *temp=head;
    while(temp->data != key)
    {
	temp=temp->next;
    }
    dlist *new=create_node(val);
    new->next=temp->next;
    new->prev=temp;
    temp->next->prev=new;
    temp->next=new;

}

void reverse(dlist **head)
{
    dlist *current_node,*temp;
    current_node=*head;
    while(current_node != NULL)
    {
	temp=current_node->prev;
	current_node->prev=current_node->next;
	current_node->next=temp;
	current_node=current_node->prev;
    }
        *head=temp->prev;
}
void print(dlist *head)
{
    if(head == NULL)
    {
	printf("empty");
	return;
    }
    dlist *temp=head;
    while(temp != NULL)
    {
	printf("%d->",temp->data);
	temp=temp->next;
    }
    printf("NULL");
}

int main()
{
    dlist *head=NULL;
    dlist_insert_last(&head,10);
//    dlist_delete_last(&head,10);
    dlist_insert_first(&head,5);
   // dlist_delete_first(&head,5);
   dlist_insert_after(head,5,7);
    dlist_insert_before(&head,10,2);
    printf("before reversing:");
    print(head);
    reverse(&head);
    printf("\nafter reversing:");
    print(head);

}
