#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;

    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++)
    {
	printf("%d",*(arr + i));
    }
}
