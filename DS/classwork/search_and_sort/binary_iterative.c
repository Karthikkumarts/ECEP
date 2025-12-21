#include<stdio.h>
int  binary_iterative(int arr[],int key,int size);

int  binary_iterative(int arr[],int key,int size)
{
    int low=0,high=(size-1);
    while(low <= high)
    {
	int mid=(low+high)/2;
	if(arr[mid] == key)
	{
	    return mid;
	}
	if(key < arr[mid])
	{
	    high=mid-1;
	}
	else
	    low=mid+1;
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
    position= binary_iterative(arr,key,size);
    if(position != -1)
    {
	printf("%d is the  position of %d\n",position,key);
    }
    else
	printf("not found key element %d\n",key);
}

