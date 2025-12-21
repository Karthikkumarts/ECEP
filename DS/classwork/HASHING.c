#include<stdio.h>
#define size 10
int arr[size];
void init()
{
    for(int i=0;i<size;i++)
    {
	arr[i]=-1;
    }
}
void insert(int x)
{
    int key=x%size;
    if(arr[key] == -1)
    {
	arr[key]=x;
    }
    else
    {
	while( key < size)
	{
	    if(arr[key] == -1)
	    {
		arr[key]=x;
		break;
	    }
	    key++;
	}
    }
}
void print()
{
    for(int i=0;i<size;i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");
}

void delete()
{
    int x;
    printf("enter the value to be deleted:");
    scanf("%d",&x);
    int key=x%size;
    if(arr[key] == x)
	arr[key]=0;
    while( key < size)
    {
	if(arr[key] == x)
	{
	    arr[key]=0;
	    break;
	}
	key++;
    }
}
void search()
{
    int val;
    printf("enter the value to be searched:");
    scanf("%d",&val);
    int key=val%size;
    if(arr[key] == val)
    {
	printf("search found\n");
	printf("%d\n",arr[key]);
    }
    else if(arr[key] != val)
    {
	while( key < size)
	{
	    if(arr[key] == val)
	    {
		printf("search found\n");
		printf("%d\n",arr[key]);
		break;
	    }
	    key++;
	}
    }
    else
    {
	printf("not found\n");
    }
}
int main()
{
    init();
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(11);
    insert(14);
    print();
    search();
    delete();
    print();

}
