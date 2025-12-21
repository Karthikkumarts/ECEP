#include<stdio.h>
#include<stdlib.h>
int  addition(int arr[] );
int main()
{
  //  int arr[5],i; //arr[5] static allocation
      int i;
  //  int *arr = malloc(5 * sizeof(int)); //dynamic allocation memeory
    int *arr =calloc(5 ,sizeof(int)); //dynamic allocation memeory
    if (arr == NULL)
    {
	printf("unable to allocate the memory");
	return 1;
    }
    printf("enter the elements :\n");
    for (i=0;i<5;i++)
    {
	scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");
 int sum= addition(arr);
  printf("the sum of array is %d",sum);
}
int addition(int arr[])
{
  int  sum=0;
    for (int j=0;j<5;j++)
    {
	sum= (sum + arr[j]);
    }
    return sum;
}

