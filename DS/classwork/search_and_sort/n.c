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
	end++;
    }
    if(start < end)
    {
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
    }
    int tem=arr[lb];
    arr[lb]=arr[end];
    arr[end]=tem;
}
}

void quick_sort(int arr[],int lb,int ub)
{
    if(lb < ub)
    {
	int loc=partition(arr,lb,ub);
quick_sort(arr,lb,loc-1);
quick_sort(arr,loc+1,ub);
}

int main()
{
    int size,key;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
    int low=0,high=size-1;
     quick_sort(arr,low,high);
    for(int i=0;i<size;i++)
	printf("%d ",arr[i]);

}
