#include<stdio.h>
#include<stdlib.h>
void dynamic(int ptr[],int size,int *sum,int *sum1,int arr1[],int arr2[],int *mean);
void variance(int arr[],int size,int *sum,int *sum1,int arr1[],int arr2[],int *mean);
void dynamic(int ptr[],int size,int *sum,int *sum1,int arr1[],int arr2[],int *mean)
{
    int var2,i,var,total=0,total1=0;
    for (int i=0;i<size;i++)
    {
	total=total+ptr[i];
    }
    *sum=total;
    *mean = total / size;
    for (int i=0;i<size;i++)
    {
	var = ptr[i] - *mean;

	arr1[i] = var;
    }

    for (int i=0;i<size;i++)
    {
	var2=arr1[i]*arr1[i];
	arr2[i]=var2;
    }
    for (int i=0;i<size;i++)
    {
	total1=total1+arr2[i];
    }
    *sum1=total1;
}


void variance(int arr[],int size,int *sum,int *sum1,int arr1[],int arr2[],int *mean)
{
    int var2,i,var,total=0,total1=0;
    for (int i=0;i<size;i++)
    {
	total=total+arr[i];
    }
    *sum=total;
    *mean = (total / size);
    for (int i=0;i<size;i++)
    {
	var = arr[i] - *mean;

	arr1[i] = var;
    }

    for (int i=0;i<size;i++)
    {
	var2=arr1[i]*arr1[i];
	arr2[i]=var2;

    }
    for (int i=0;i<size;i++)
    {
	total1=total1+arr2[i];
    }
    *sum1=total1;
}



int main()
{
    int size,i,sum=0,sum1=0,n,mean=0;
    printf("enter the size:");
    scanf("%d",&size);
    printf("1.static allocation\n");
    printf("2.dynamic allocation\n");
    printf("enter the choice:");
    scanf("%d",&n);
    int arr[size];
    int arr1[size];
    int arr2[size];
    int *ptr=NULL;
    switch (n)
    {
	case 1:
	    printf("enter the elements\n");
	    for (i=0;i<size;i++)
	    {
		scanf("%d",&arr[i]);
	    }
	    variance(arr,size,&sum,&sum1,arr1,arr2,&mean);
	    printf(" X  D  D^2\n");
	    for (int i=0;i<size;i++)
	    {
		printf("%2d %2d %3d\n",arr[i],arr1[i],arr2[i]);
	    }
	    printf("sum=%d  sum=%d\n",sum,sum1);
	    printf("variance = %d\n",mean);
	    break;
	case 2:
	    ptr=malloc(size*sizeof(int));
	    if (ptr == NULL)
	    {
		printf("unable to allocate the memory\n");
		return 1;
	    }
	    printf("enter the elements\n");
	    for (i=0;i<size;i++)
	    {
		scanf("%d",&ptr[i]);
	    }
	    dynamic(ptr,size,&sum,&sum1,arr1,arr2,&mean);
	    printf(" X  D  D^2\n");
	    for (int i=0;i<size;i++)
	    {
		printf("%2d %2d %3d\n",ptr[i],arr1[i],arr2[i]);
	    }
	    printf("variance = %d\n",mean);
	    printf("sum = %d sum=%d",sum,sum1);
	    if(ptr != NULL)
	    {
		free(ptr);
		ptr = NULL;
	    }
	    break;
	default:
	    printf("enter valid number\n");
    }
}


