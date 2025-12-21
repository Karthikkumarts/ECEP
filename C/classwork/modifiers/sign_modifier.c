#include<stdio.h>
int main()
{
    unsigned char count1;
    signed long count2;
    short signed count3;
    printf("count1 is %u bytes\n", sizeof (count1));
    printf("count2 is %u bytes\n", sizeof (count2));
    printf("count3 is %lu bytes\n", sizeof (count3));
return 0;
}

