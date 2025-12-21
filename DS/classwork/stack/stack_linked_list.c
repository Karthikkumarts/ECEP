#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *link;
}slist;

slist *top=NULL;

void push(int x)
{
    slist *new;
    new=(slist*)malloc(sizeof(slist));
    new->data=x;
    new->link=top;
    top=new;
}
void peek()
{
    if(top == NULL)
    {
	printf("empty");
    }
    printf("peek value == %d\n",top->data);
}
void pop()
{
    slist *temp=top;
    if(top == NULL)
    {
	printf("empty");
    }
    printf(" poped out data == %d\n",temp->data);
    top=temp->link;
    free(temp);
}

void print()
{
    slist *temp=top;
    if(top == NULL)
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
int main()
{
    push(1);
    push(2);
    push(3);
    peek();
    print();
    pop();
    print();
}
