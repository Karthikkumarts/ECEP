#include<stdio.h>
#include<stdio.h>

int binary_search(int arr[],int key,int low , int high)
{
    while(low <= high)
    {
    int mid = (low+high)/2;
	if(arr[mid] == key)
	{
	    return mid;
	}
	else if(key < arr[mid])
	{
	    high = mid-1;
	}
	else
	{
	    low = mid + 1;
	}
    }
    return -1;

}
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int j = 0 ; j  < 5; j++)
    {
	printf("%d ",arr[j]);
    }
    printf("\n");
    int key,i;
    printf("enter the number tob searched : ");
    scanf("%d",&key);
    int ret = binary_search(arr,key,0,4);
    if(ret != -1)
    {
	printf("%d key is in %d position\n",key,ret);
    }
    else
    {
	printf("number not found\n");
    }

   
}
