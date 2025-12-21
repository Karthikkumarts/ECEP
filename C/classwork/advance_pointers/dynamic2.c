#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL;
   int n=10;
    /*allocate array dyanamically*/
    ptr=malloc( n *sizeof(int));
    if (ptr == NULL)
    {
	fprintf(stderr,"error unable to allocate memory");
	return 1 ;
    }
    *ptr=10; // store data
    *(ptr+1)=20;
    printf(" *ptr = %d\n",*ptr);
    printf(" *ptr + 1= %d\n",*(ptr+1));
    /*free memory*/
    if (ptr != NULL)
    {
	free(ptr);
	ptr = NULL;
    }
}

