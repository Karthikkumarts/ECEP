#include<stdio.h>
largest(int arr[] ,int *max,int size);
int main()
{
    int a[5]={1,105,3,4,5};
    int max;
    largest(a,&max,5);
    printf("largest of array is %d",max);
    return 0;
}


largest(int arr[],int *max, int size)
{
    *max=arr[0];
    for(int i=1;i<5;i++)
    {
	if (arr[i]> *max)
	    *max=arr[i];
    }
}
