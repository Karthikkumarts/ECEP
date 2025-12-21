#include<stdio.h>
int main()
{
int num=0x12345678;
int *iptr=&num;
char *cptr=(char *)&num;
short *sptr=(short *)&num;
printf("*iptr = %x\n",*iptr);
printf("*cptr = %x\n",*cptr);
printf("*sptr = %x\n",*sptr);
printf("*sptr=%x\n",*((short *)&num));
printf("own=%x\n",*(short *)iptr);
return 0;
}
