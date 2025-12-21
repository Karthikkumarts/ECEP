#include<stdio.h>
#define  N 5
int queue[N];
int front=-1;
int rear =-1;
void enqueue(int x)
{
    if(rear == N-1)
    {
	printf("overflow");
    }
    else if(front == -1 && rear == -1)
    {
	front=rear=0;
	queue[rear]=x;
    }
    else
    {
	rear++;
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
	front++;
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
    if(rear == -1 && front ==-1)
    {
	printf("empty");
    }
    printf("display:");
for(int i= front;i<=rear;i++)
{
    printf("%d ",queue[i]);
}
}
int main()
{
    enqueue(2);
    enqueue(10);
    enqueue(5);
    dequeue();
    peek();
    display();

}
