#include<stdio.h>
void selection_sort(int arr[],int size);
void selection_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
	int min=i;
	for(int j=i+1;j<size;j++)
	{
	    if(arr[j] < arr[min])
	    {
		min=j;
	    }
	}
	if(min != arr[i])
	{
	   int temp=arr[i];
	    arr[i]=arr[min];
	    arr[min]=temp;
	}
    }
    for(int i=0;i<size;i++)
    {
	printf("%d\n",arr[i]);
    }
}

int main()
{
    int size,key;
    printf("enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:");
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    selection_sort(arr,size);
}
