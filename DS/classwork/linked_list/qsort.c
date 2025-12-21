#include<stdio.h>
#include<stdlib.h>
int sort(const void *a, const void *b)
{
    return *(int *)a > *(int *)b;
}
void print(int *arr , int size)
{
    for(int j = 0 ; j < 5 ; j++)
    {
	printf("%d ",arr[j]);
    }
    printf("\n");
}
int main()
{
    int size;
    printf("enter the size : ");
    scanf("%d",&size);
    int arr[size];

    printf("enter the number :  ");
    for(int i = 0 ; i < 5 ; i++)
    {
	scanf("%d",&arr[i]);

    }
    printf("\n");
    qsort(arr,size,sizeof(int),sort);
    printf("after sorting : ");
    print(arr,size);
}
