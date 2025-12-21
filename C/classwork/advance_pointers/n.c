#include<stdio.h>
#include<stdlib.h>
int add(int arr[],int size);
int main()
{
    int *arr=NULL;
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    arr=malloc(size * sizeof(int));
    if(arr == NULL)
    {
	printf("unable to allocate the memory");
	return 1;
    }
    for(int i=1;i<=size;i++)
    {
	arr[i]=i;
    }
    printf("before allocating\n");
    for(int i=1;i<=size;i++)
    {
	printf("%d\n",arr[i]);
    }
    int n;
    int *arr_new=NULL;
    printf("enter the new size:");
    scanf("%d",&n);
    arr_new=realloc(arr ,n * sizeof(int));
    if(arr != NULL)
    {
	arr = arr_new;
    }
    if( n > size)
    {
	for(int i = size+1;i<=n;i++)
	{
	    arr[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
	    printf("%d\n",arr[i]);
	}
    }
    else
    {
	for(int i = 1;i<=n;i++)
	printf("%d\n",arr[i]);
    }
    if(arr != NULL)
    {
	free(arr);
	arr=NULL;
    }
    
}
