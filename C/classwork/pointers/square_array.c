#include<stdio.h>
void sq(int arr[],int size,int arr2[]);
int main()
{
    int arr[5];
    int a[5]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(int);
    sq(a,size,arr);
    for(int i=0;i<5;i++)
    {
	printf("square of %d is %d\n",a[i],arr[i]);
    }
    
    return 0;
}

void sq(int arr[] ,int size,int arr2[])
{
    for (int i=0;i<size;i++)
    {
	arr2[i]=(arr[i] * arr[i]);
    }
}
