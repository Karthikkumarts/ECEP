#include<stdio.h>
void insertion_sort(int arr[],int size)
{
    int j,i,key;
    for(i=1;i<size;i++)
    {
	key=arr[i];
	j=i-1;
	while(j>=0 && arr[j] > key)
	{
	    arr[j+1]=arr[j];
	    j=j-1;
	}
	arr[j+1]=key;
    }
    printf("printing after sorting\n");
    for(i=0;i<size;i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");
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
    printf("printing before sorting\n");
    for(int i=0;i<size;i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");
    insertion_sort(arr,size);
}

