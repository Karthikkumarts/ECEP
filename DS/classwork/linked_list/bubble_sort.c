#include<stdio.h>
void bubble_sort(int arr[],int size)
{
    int i,j,temp;
    for(i = 0 ; i < size ; i++)
    {
	for(j = i+1 ; j < size ; j++)
	{
	    if(arr[i] < arr[j])
	    {
             temp = arr[i];
	     arr[i]=arr[j];
	     arr[j]=temp;
	    }
	}
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

    bubble_sort(arr,size);
    printf("after sorting : ");
    for(int i = 0 ; i < size ; i++)
    printf("%d ",arr[i]);
}
