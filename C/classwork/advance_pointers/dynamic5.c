#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,n;
    printf("enter the size:");
    scanf("%d",&size);
    int *arr=NULL,*arr_new=NULL;
    arr=malloc(size * sizeof(int));
    if (arr == NULL)
    {
	fprintf(stderr,"unable to allocate the memory");
	return 1;
    }
    for (int i=1;i<=size;i++)
    {
	arr[i]=i;
    }
    printf("enter the reallocate size:");
    scanf("%d",&n);
    arr_new=realloc(arr, n * sizeof(int));
    if( arr != NULL)
    {
	arr = arr_new;
    }
    if(n > size )
    {
	for (int i=size+1;i<=n;i++)
	{
	    arr[i]=i;
	}
	for (int i=1;i<=n;i++)
	{
	    printf("%d",arr[i]);
	}
    }
    else
    {
	for (int i=1;i<=n;i++)
	{
	    printf("%d ",arr[i]);
	}
    }
    if(arr != NULL)
    {
	free(arr);
	arr=NULL;
    }
}
