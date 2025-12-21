#include<stdio.h>
int main()
{
    int num=0x12345678;
    int *iptr;
    char *cptr;
    iptr=&num;
    cptr=(char*)&num;
    printf("iptr %x cptr %x\n",*iptr,*cptr);
    if (*cptr == *(char *)iptr)
	printf("little endian\n");
    else
	printf("big endian\n");
    return 0;
}
