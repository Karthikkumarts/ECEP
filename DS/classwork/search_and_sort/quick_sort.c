#include<stdio.h>
void quick_sort(int arr[],int lb,int ub);
int partition(int arr[],int lb,int ub);


int partition(int arr[],int lb,int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start < end)
   {
	while(arr[start] <= pivot)
	{
	    start++;
	}
    while(arr[end] > pivot)
    {
	end--;
    }
    if(start < end)
    {
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
    }
    }
    int temp=arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;
    return end;

}
void quick_sort(int arr[],int lb,int ub)
{
    if(lb < ub)
    {
   int loc =  partition(arr,lb,ub);
       quick_sort(arr,lb,loc-1);
       quick_sort(arr,loc+1,ub);
    }
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
    int low=0,high=(size-1);

    quick_sort(arr,low,high);
    printf("printing after sorting\n");
    for(int i=0;i<size;i++)
    {
	printf("%d ",arr[i]);
    }
}

