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
    

    int large = arr[0];
    for(i = 1 ; i < size ; i++)
    {
	if(arr[i] > large)
	    large= arr[i];
    }
    printf("\nthe largest element of an array is : %d\n",large);

}
