#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *link;
}slist;

slist *create(void)
{
    int num;
    slist *ptr=(slist *)malloc(sizeof(slist));
    scanf("%d",&num);
    ptr->data=num;
    ptr->link=NULL;
    return ptr;
}

void insert(slist **head)
{
    if(*head == NULL)
    {
	printf("enter the number:");
	*head=create();
    }
    else
    {
	slist *temp=*head;
	while(temp->link != NULL)
	{
	    temp=temp->link;
	}
	slist *new=create();
	temp->link=new;
    }
}
void reverse(slist **head)
{
    slist *prev,*next,*current;
    if(head == NULL)
    {
	printf("empty");
    }
    current = next =*head;
    prev=NULL;
    while(current != NULL)
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
	printf("empty");
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
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
	insert(&head);
	printf("enter the number:");
    }
    printf("before reversing");
    print(head);
    reverse(&head);
    printf("\n");
    printf("after reverseing:");
    print(head);
    sort(head);
    printf("\nafter sorting:");
    print(head);
}
