#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("enter the number to be added:");
    scanf("%d",&x);
    if(top == N-1)
    {
	printf("overflow");
    }
    else
    {
//	for(int i=0;i<N-1;i++)
	//{
	    top++;
	//    scanf("%d",&stack[i]);
	     stack[top]=x;
	//}
    }
}
void pop()
{
    int item;
    if(top == -1)
    {
	printf("underflow\n");
    }
    else
    {
	item=stack[top];
	top--;
	printf("deleted item = %d\n",item);
    }
}

void peek()
{
    if(top == -1)
    {
	printf("underflow\n");
    }
    else
    {
	printf("peek value = %d\n",stack[top]);
    }
}
void print()
{
    int i;
    for(i=top;i>=0;i--)
    {
	printf("%d\n",stack[i]);
    }
}

int main()
{
    char ch;
    do
    {
	int num;
	printf("1.push\n2.pop\n3.peek\n4.print\nenter your choice:");
	scanf("%d",&num);
	switch(num)
	{
	    case 1:
		push();
		break;
	    case 2:
		pop();
		break;
	    case 3:
		peek();
		break;
	    case 4:
		print();
		break;
	    default:
		printf("invalid input");
		break;
	}
	printf("do you want to continue press Y:");
	getchar();
	scanf("%c",&ch);
    }while(ch == 'Y' || ch == 'y' );
}

