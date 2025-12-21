#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *link;
}slist;
slist *front=NULL;
slist *rear=NULL;
slist *create_node(int data)
{
    slist *ptr=(slist *)malloc(sizeof(slist));
    ptr->data=data;
    ptr->link=NULL;
}
void enqueue(int val)
{
    if(front == NULL && rear == NULL)
    {
	front=rear=create_node(val);
    }
    else
    {
	slist *newnode;
	newnode=create_node(val);
	rear->link=newnode;
	rear=newnode;
	newnode->link=front;
    }
}
void display()
{
    slist *temp;
    temp=front;
    if(front == NULL && rear == NULL)
    {
	printf("empty");
    }
    while(temp->link != front)
    {
	printf("%d->",temp->data);
	temp=temp->link;
    }
    printf("NULL");
}
void dequeue()
{
    slist *temp;
    temp=front;
    if(front == NULL && rear == NULL)
    {
	printf("empty");
    }
    else if(front == rear)
    {
	front=rear=NULL;
	free(temp);
    }
    else
    {
    printf("\ndeleted = %d\n",temp->data);
    front=temp->link;
    rear->link=front;
    free(temp);
    }
}
void peek()
{
    if(front == NULL && rear == NULL)
    {
	printf("empty");
    }
    printf("\n peek == %d",front->data);
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    peek();
}
