#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
    

}slist;

slist *create_node();
slist *create_node()
{
    int val;
    slist *ptr=(slist*) malloc(sizeof(slist));
    printf("enter the number to be added:");
    scanf("%d",&val);
    ptr->data=val;
    ptr->link=NULL;
    return ptr;
}

void slist_insert_before(slist **head,int key)
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
    slist *new=create_node();
    new->link=temp;
    prev->link=new;

}
/*void slist_delete_before(slist **head)
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
  }*/

void slist_insert_first(slist **head)
{
    if(*head == NULL)
    {
	*head=create_node();
	return;
    }
    slist *new=create_node();
    new->link = *head;
    *head=new;

}
void slist_insert_after(slist **head,int key)
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
    slist *new=create_node();
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

void slist_delete_first(slist **head)
{
    if(*head==NULL)
    {
	printf("list is empty");
    }
    slist *temp=*head;
    *head=temp->link;
    free(temp);

}

void slist_delete_last(slist **head)
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

void slist_insert_last(slist **head)
{
    if(*head == NULL)
    {
	*head =create_node();
	return;
    }
    slist *temp=*head;
    while(temp->link != NULL)
    {
	temp=temp->link;
    }
    slist *new=create_node();
    temp->link=new;
    return;

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

    int num;
    char ch;
	slist *head=NULL;
    do
    {
	int a;
	printf("1.insert_last\n2.delete_last\n3.insert_first\n4.deletefirst\n5.insert_before\n6.insert_after\n7.delete_any\nenter your choice:");
	scanf("%d",&a);
	switch(a)
	{
	    case 1:
		slist_insert_last(&head);
		break;
	    case 2:
		slist_delete_last(&head);
		break;
	    case 3:
		slist_insert_first(&head);
		break;
	    case 4:
		slist_delete_first(&head);
		break;
	    case 6:
		printf("enter the key:");
		scanf("%d",&num);
		slist_insert_after(&head,num);
		break;
	    case 5:
		printf("enter the key:");
		scanf("%d",&num);
		slist_insert_before(&head,num);
		break;
	    case 7:
		printf("enter the key:");
		scanf("%d",&num);
		slist_delete_after(&head,num);
		break;
	    default:
		break;
	}

	print(head);
	getchar();
	printf("\ndo you want to continue:");
	scanf("%c",&ch);
    }while(ch == 'y' || ch== 'Y');
}
