#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next,*prev;
}dlist;

void reverse(dlist **head);
dlist *create(void)
{
    int num;
    dlist *ptr=(dlist *)malloc(sizeof(dlist));
    scanf("%d",&num);
    ptr->data=num;
    ptr->next=NULL;
    ptr->prev=NULL;
}

void insert(dlist **head)
{
    if(*head ==NULL)
    {
	*head=create();
    }
    else
    {
	dlist *temp=*head;
	while(temp->next != NULL)
	{
	    temp=temp->next;
	}
	dlist *new=create();
	temp->next=new;
	new->prev=temp;
    }
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
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
	printf("enter the number:");
	insert(&head);
    }	
    printf("before reversing:");
    print(head);
    reverse(&head);
    printf("\n");
    printf("after reversing:");
    print(head);

}
