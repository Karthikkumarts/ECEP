#include<stdio.h>
int square(int n)
{
    return n*n;
}
int div(int n)
{
    return n/2;
}
void  map(int *arr, int size,int (*fptr)(int))
{
    for(int i=0;i<10;i++)
    {
	arr[i]=fptr(arr[i]);
    }
}
int main()
{
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    printf("square---->\n");
    map(arr,10,square);
    for(int i=0;i<10;i++)
    {
	printf("%d\n",arr[i]);
    }
printf("division---->\n");
   map (arr,10,div);
    for(int i=0;i<10;i++)
    {
	printf("%d\n",arr[i]);
    }
}
