#include<stdio.h>
int main()
{
    int num = 0x12354678;
    int *ptr= &num;
    char *cptr = (char *)&num;
    printf("iptr = %x\n",*ptr);
    printf("cptr = %x\n",*cptr);
    printf("sptr = %x\n",*(short *)&num);


}

