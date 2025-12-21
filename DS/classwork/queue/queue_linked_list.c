#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *link;
}slist;
slist *front=NULL;
slist *end=NULL;
slist *create_node(int data)
{
   slist *ptr=(slist *)malloc(sizeof(slist));
   ptr->data=data;
   ptr->link=NULL;
}
void enqueue(int val)
{
    if(front == NULL && end == NULL)
    {
	front=end=create_node(val);
    }
    else
    {
	slist *newnode;
	newnode=create_node(val);
	end->link=newnode;
	end=newnode;
    }
}
void display()
{
    slist *temp;
    temp=front;
    if(front == NULL && end == NULL)
    {
	printf("empty");
    }
    while(temp != NULL)
    {
	printf("%d->",temp->data);
	temp=temp->link;
    }
    printf("NULL");
}
void dequeue()
{
    if(front == NULL && end == NULL)
    {
	printf("empty");
    }
slist *temp;
temp=front;
printf("\ndeleted = %d\n",temp->data);
front=temp->link;
free(temp);
}
void peek()
{
    if(front == NULL && end == NULL)
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
