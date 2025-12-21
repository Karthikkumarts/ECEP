#include<stdio.h>
int main()
{
    int x;
    int *iptr;
    iptr=&x;
    char y;  // also check for int 
    char *cptr;  // also check for int
    cptr=&y;
    printf("size x= %zu\n",sizeof(x));
    printf("size iptr = %zu\n",sizeof(iptr));
    printf("size y = %zu\n",sizeof(y));
    printf("size cptr = %zu\n",sizeof(cptr));
    return 0;
}
