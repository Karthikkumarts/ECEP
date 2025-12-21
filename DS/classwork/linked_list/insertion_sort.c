#include<stdio.h>
void insertion_sort(int arr[],int size)
{
    printf("insertion sort-------------- \n");
    int i,j,key;
    for(i =1 ; i < size ; i++)
    {
	key = arr[i];
	j = i-1;
	while(j >=0 && arr[j]>key )
	{
	    arr[j+1]=arr[j];
	    j--;
	}
	arr[j+1]=key;
    }
}
int main()
{
    int size;
    printf("enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the numebr : ");
    for(int i = 0 ; i < size ; i++)
    scanf("%d",&arr[i]);

    insertion_sort(arr,size);
    printf("after sorting : ");
    for(int i = 0 ; i < size ; i++)
    printf("%d ",arr[i]);
}
