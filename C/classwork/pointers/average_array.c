#include<stdio.h>
    avr(int arr[],int *sum,int *average ,int size);
int main()
{
    int a[5]={10,20,30,40,50};
    int sum=0,average=0;
    avr(a,&sum,&average,5);
    printf("the average of array is %d",average);
    return 0;
}

    avr( int arr[],int *sum,int *average ,int size)
    {
	*sum=arr[0];
	for ( int i=1;i<size;i++)
	{
	    *sum=(*sum+arr[i]);
	}
	*average=*sum/size;
    }
