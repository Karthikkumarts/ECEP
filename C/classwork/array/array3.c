#include<stdio.h>
int main()
{
    int size,index,sum=0,large;
    float avg;
    printf("enter the size of an array elements:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:\n");
    for (index=0;index<size;index++)
    {
	scanf("%d",&arr[index]);
    }
    printf("\n");
    for (index=0;index<size;index++)
    {
	sum = sum + arr[index];
    }
    large=arr[0];
    for (index=1;index<size;index++)
    {
	if (arr[index] > large)
	    large=arr[index];
    }
    printf("large is %d\n",large);
    printf("sum is %d\n",sum);
    avg=(float) sum/size;
    printf("average is %f\n",avg);
    printf("size of array is %zu",sizeof(arr));
    return 0;
}


