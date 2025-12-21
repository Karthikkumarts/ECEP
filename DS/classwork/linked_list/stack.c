#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * link;
}slist;

slist *top = NULL;

void push(int i)
{
    slist *new;
    new = (slist *)malloc(sizeof(slist));

    new->data = i;
    new->link = top;
    top = new;
}
void pop()
{
slist *temp=top;
if(temp == NULL)
{
    printf("Stack underflow\n");
}
top = temp->link;
free(temp);
}
void display()
{
    slist *temp=top;
    if(temp == NULL)
    {
	printf("stack empty\n");
    }
   while(temp != NULL)
   {
       printf("%d->",temp->data);
       temp=temp->link;
   }
   printf("NULL\n");
   
}
int main()
{
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
}

