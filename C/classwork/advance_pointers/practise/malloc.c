#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr=NULL , *arr_new = NULL;
    int size;
    printf("enter the size : ");
    scanf("%d",&size);
    arr = malloc(size * sizeof(int));
    if(arr == NULL)
    {
	fprintf(stderr,"malloc failed\n");
    }
    printf("enter the numbers : ");
    for(int i = 1 ; i <= size ; i++)
	arr[i] = i;

    for(int i = 1 ; i <=size ; i++)
	printf("%d ",arr[i]);

  printf("\n"); 
    int n;
    printf("enter the new size : ");
    scanf("%d",&n);
    arr_new = realloc(arr , n *sizeof(int));
    if(arr_new == NULL)
    {
	fprintf(stderr,"failed realloc");
    }
    if(n > size )
    {
    for(int i = size+1 ; i <= n ; i++)
	arr[i] = i;
    
    for(int i = 1 ; i <= n ; i++)
	printf("%d ",arr[i]);
    }
    else
    {
    for(int i = 1 ; i <=n ; i++)
	printf("%d ",arr[i]);
    }


  printf("\n"); 
    if(arr != NULL)
    {
	free(arr);
	arr = NULL;
    }
}
