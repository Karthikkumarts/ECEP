#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements : ");
    for(i = 0 ; i < size ; i++)
	scanf("%d",&arr[i]);
    printf("the elements of an array are: ");
    for(i = 0 ; i < size ; i++)
	printf("%d ",arr[i]);
    int sum = arr[0];
    for(i = 1 ; i < size ; i++)
	sum += arr[i];
    printf("\n sum of this array is : %d\n",sum);


}
