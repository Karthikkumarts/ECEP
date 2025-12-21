#include<stdio.h>
#define N 5
int queue[N];
int front,rear=-1;

void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
	front=rear=0;
	queue[rear]=x;
    }
    else if((rear == N-1))
    {
	printf("overflow");
    }
    else
    {
	rear++;
	queue[rear]=x;
    }
}
void dequeue()
{
    if(front == -1 && rear == -1)
    {
	printf("empty\n");
    }
    else if( front == rear)
    {
	printf("dequeue : %d\n",queue[front]);
	rear=front=-1;
    }
    else
    {
	printf("dequeue : %d\n",queue[front]);
	front++;
    }
}
void display()
{
    int i;
if(front == -1 && rear == -1)
{
    printf("empty\n");
}
for(i = front ; i <= rear ; i++)
{
    printf("%d ",queue[i]);
}
printf("\n");
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
}
