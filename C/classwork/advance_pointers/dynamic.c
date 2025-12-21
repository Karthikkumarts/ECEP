#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int a[5];
    int *ptr = NULL;
    ptr= malloc(10);
    if (ptr == NULL)
    {
	printf("unable to allocate the memory\n");
	return 1;
    }
    *ptr=10;
    *(ptr+1)=20;
    printf("*ptr =  %d\n",*ptr);
    printf("*ptr + 1 =  %d\n",* (ptr + 1));

    if (ptr != NULL)
    {
	free(ptr);
	ptr = NULL;
    }
}
