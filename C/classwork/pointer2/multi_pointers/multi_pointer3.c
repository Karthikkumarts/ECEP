#include<stdio.h>
#include<stdlib.h>
void alloc_mem(int **pptr,int nmemb);
int main()
{
    int *ptr=NULL;
    alloc_mem(&ptr,5);
    if (ptr == NULL)
	exit(1);
    printf("allocated memory\n");
    printf("ptr[0] = %d\n",ptr[0]);
}
void alloc_mem(int **pptr,int nmemb)
{
   *pptr=(int *)malloc(nmemb * sizeof(int));
    **pptr=2;
}

