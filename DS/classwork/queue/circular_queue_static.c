#include<stdio.h>
#define  N 5
int queue[N];
int front=-1;
int rear =-1;
void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
	front=rear=0;
	queue[rear]=x;
    }
    else if(((rear+1)%N) == front)
    {
	printf("queue is full");
    }
    else
    {
	rear=(rear+1)%N;
	queue[rear]=x;
    }
}

void dequeue()
{
    if(rear == -1 && front ==-1)
    {
	printf("empty");
    }
    else if(front == rear)
    {
	printf("dequeue = %d\n",queue[front]);
	front=rear=-1;
    }
    else
    {
	printf("dequeue = %d\n",queue[front]);
	front=(front +1)%N;
    }
}
void peek()
{
    if(rear == -1 && front ==-1)
    {
	printf("empty");
    }
    else
    {
	printf(" peek = %d\n",queue[front]);
    }

}

void display()
{
    int i=front;
    if(rear == -1 && front ==-1)
    {
	printf("empty");
    }
    printf("display:");
    while(i != rear)
    {
	printf("%d ",queue[i]);
	i=(i+1)%N;
    }
    printf("%d",queue[rear]);
    printf("\n");
}
int main()
{
    char ch;
    int num;
    int val;
    do
    {
	printf("1.enqueue\n2.dequeue\n3.peek\n4.display\nenteryour choice:");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
	    printf("enter the value:");
	    scanf("%d",&val);
	    enqueue(val);
	    break;
	case 2:
	    dequeue();
	    break;
	case 3:
	    peek();
	    break;
	case 4:
	    display();
	    break;
	default:
	    printf("enter correct choice");
	    break;
    }
	    printf("Do you want continue?press y:");
	    getchar();
	    scanf("%c",&ch);
    }while(ch == 'Y' || ch =='y');
}
