#include<stdio.h>
int main()
{
       volatile  long int wait;
    //long int wait;
    unsigned char bit=0;
    while(1)
    {
	bit = !bit;
	printf("the bit is now :%d\r",bit);
	fflush(stdout);
	for(wait=0xFFFFFFFF;wait-- ;);
    }
    return 0;
}
