#include<stdio.h>
int  binary_recursive(int arr[],int key,int low,int high);

int  binary_recursive(int arr[],int key,int low,int high)
{
    while(low <= high)
    {
	int mid=(low+high)/2;
	if(arr[mid] == key)
	{
	    return mid;
	}
	if(key < arr[mid])
	{
	  return  binary_recursive(arr,key,low,mid-1);
	}
	else
	   return  binary_recursive(arr,key,mid+1,high);
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
    int low=0,high=(size-1);
    position= binary_recursive(arr,key,low,high);
    if(position != -1)
    {
	printf("%d is the  position of %d\n",position,key);
    }
    else
	printf("not found key element %d\n",key);
}

