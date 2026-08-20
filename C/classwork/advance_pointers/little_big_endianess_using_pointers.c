#include<stdio.h>
int main()
{
    int num=0x12345678;
    int *iptr=&num;
    char *cptr=(char * )&num;
    printf("%x %x\n",*(char *)iptr,*cptr);
    if(*(char *)iptr == *cptr)
    {
	printf("little endiannes\n");
    }
    else
    {
	printf("big endianess");
    }

}
