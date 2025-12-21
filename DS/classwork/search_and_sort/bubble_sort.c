#include<stdio.h>
void bubble_sort(int arr[],int size)
{
    int temp,i;
    for(i=0;i<size;i++)
    {
	for(int j=i+1;j<size;j++)
	{
	    if(arr[i] > arr[j])
	    {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    }
	}
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
    bubble_sort(arr,size);
}

