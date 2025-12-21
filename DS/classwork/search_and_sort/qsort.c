#include<stdio.h>
#include<stdlib.h>
int sort(const void* a,const void *b)
{
    return *(int *)a > *(int *)b;
}
int main()
{
    int size,key;
    printf("enter the size of an array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:");
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
qsort(arr,size,sizeof(int),sort);
    for(int i=0;i<size;i++)
    {
	printf("%d",arr[i]);
    }

}
