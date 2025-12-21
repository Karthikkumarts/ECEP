#include<stdio.h>
int  linear_search(int arr[],int key,int size);

int  linear_search(int arr[],int key,int size)
{
 /*   for(int i=0;i<size;i++)
    {
	if(arr[i]==key)
	{
	    return i;
	}
    }*/
    int pos=0;
    while(pos < size)
    {
	if(arr[pos] == key)
	{
	    return pos;
	}
	else 
	    pos++;
    }
	    return -1;
}


int main()
{
    int size,position;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array\n");
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("printing the elements\n");
    for(int i=0;i<size;i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");
    int key;
    printf("enter the key value to know in which pos is at:");
    scanf("%d",&key);
    position= linear_search(arr,key,size);
    if(position == -1)
    {
    printf(" key %d is not found\n",key);
    }
    else
    printf("%d is the  position of %d\n",position,key);
}
