#include<stdio.h>
int main()
{
int num = 0x12346578;

int* iptr = (int *)&num;
char *cptr= (char *)&num;
if(*cptr == *(char *)iptr)
{
    printf("%x %x",*cptr,*(char *)iptr);
    printf("\nlittel endianess\n");
}
else
{
    printf("\nbig endianess\n");
}

}
