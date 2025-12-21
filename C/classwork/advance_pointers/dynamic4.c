#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *ptr=NULL, *new_ptr=NULL;
    int n=10;
    //ptr=malloc(-1);
    /*allocte array dynamically*/
    ptr= malloc(n *sizeof(int));
    if (ptr == NULL)
    {
	fprintf(stderr,"error :unable to allocate the memory");
	return 1;
    }
    ptr[0]=1;
    printf("ptr[0] =  %d",ptr[0]);
    //resize memory (double it)
    new_ptr=realloc(ptr,(n*2)*sizeof(int));
    if (new_ptr != NULL)
    {
	ptr = new_ptr; //store in old ptr
    }
    else
    {
	// realloc fails:print error
    }
    ptr[12]=20;
    printf("ptr[12] =  %d",ptr[12]);

    /*free memory*/
    if (ptr != NULL)
    {
	free(ptr);
	ptr=NULL;
    }
}
