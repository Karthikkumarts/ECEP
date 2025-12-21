#include<stdio.h>
int main()
{
    int arr[5];
    int index;
    printf("enter array elements:\n");

    for (index=0;index<5;index++)
    {
	scanf("%d",&arr[index]);
    }
    printf("\n");
    for (index=0;index<5;index++)
    {
	printf("%d\n",arr[index]);
    }
    printf("\n");
    return 0;
}
