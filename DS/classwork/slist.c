#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;

}slist;

void slist_insert_last(slist **head,int val);
slist* create_node(int data);
void print(slist *head);

void slist_insert_before(slist **head,int key,int val)
{
if(*head == NULL)
{
    printf("empty");
}
slist *temp,*prev;
temp=*head;
while(temp->data != key)
{
    prev=temp;
    temp=temp->link;
}
slist *new=create_node(val);
new->link=temp;
prev->link=new;

}
void slist_delete_before(slist **head,int val)
{
if(*head == NULL)
{
    printf("empty");
}
slist *temp,*prev;
temp=*head;
while(temp->data != val)
{
    prev=temp;
    temp=temp->link;
}
prev->link=temp->link;
free(temp);
}

void slist_insert_first(slist **head,int val)
{
if(*head == NULL)
{
    *head=create_node(val);
    return;
}
slist *new=create_node(val);
new->link = *head;
*head=new;

}
void slist_insert_after(slist **head,int key,int val)
{
    if(*head == NULL)
    {
	printf("empty");
    }
    slist *temp=*head;
    while(temp->data != key)
    {
	temp=temp->link;
    }
    slist *new=create_node(val);
   new->link= temp->link;
   temp->link=new;
}
void slist_delete_after(slist **head,int key)
{
    if(*head == NULL)
    {
	printf("list is empty");
    }
    slist *temp,*prev;
    while(temp->data != key)
    {
	prev=temp;
	temp=temp->link;
    }
    prev->link=temp->link;
    free(temp);
    
}

void slist_delete_first(slist **head,int val)
{
    if(*head==NULL)
    {
	printf("list is empty");
    }
    slist *temp=*head;
    *head=temp->link;
    free(temp);
   
}

void slist_delete_last(slist **head,int val)
{
    if(*head == NULL)
    {
	printf("list is empty");

    }
    slist *temp,*prev;
    temp=*head;
    while(temp->link != NULL)
    {
	prev=temp;
	temp=temp->link;
    }
    free(temp);
    if(prev == NULL)
	*head=NULL;
    else
	prev->link=NULL;
}

void slist_insert_last(slist **head,int val)
{
    if(*head == NULL)
    {
	*head =create_node(val);
	return;
    }
    slist *temp=*head;
    while(temp->link != NULL)
    {
	temp=temp->link;
    }
    slist *new=create_node(val);
    temp->link=new;
    return;

}
slist *create_node(int data)
{
    slist *ptr=(slist*) malloc(sizeof(slist));
    
    ptr->data=data;
    ptr->link=NULL;
    return ptr;
}
void reverse(slist **head)
{
slist *prev,*next,*current;
    prev=0;
    current=next=*head;
    while(next != NULL)
    {
	next=next->link;
	current->link=prev;
	prev=current;
	current=next;
    }
    *head=prev;
}
void sort(slist *head)
{
    slist *i,*j;
    int temp;
    i=head;
    for(i=head;i != NULL;i=i->link)
    {
	for(j=i->link;j != NULL ; j =j->link)
	{
	    if(i->data > j->data)
	    {
		temp=i->data;
		i->data=j->data;
		j->data=temp;
	    }
	}
    }
}
void print(slist *head)
{
    if(head == NULL)
    {
	printf("list is empty");
    }
    slist *temp=head;
    while(temp != NULL)
    {
	printf("%d->",temp->data);
	temp=temp->link;
    }
    printf("NULL");
}

int main()
{
    slist *head=NULL;
    slist_insert_last(&head,10);
    slist_insert_last(&head,20);
//    slist_delete_last(&head,20);
    slist_insert_first(&head,5);
   // slist_delete_first(&head,5);
    slist_insert_after(&head,5,7);
    slist_delete_after(&head,7);
    /*slist_insert_before(&head,10,9);
    slist_delete_before(&head,9);
    printf("before reversing:");
    print(head);
    printf("\nafter reversing:");
    reverse(&head);
    print(head);
    sort(head);
printf("\n after sorting:");*/
    print(head);

}
