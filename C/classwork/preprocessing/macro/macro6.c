#include<stdio.h>
#define GET_BIT(num,pos) (((unsigned)num >> pos) & 1)
#define SET_BIT(num,pos) ((num) | (1<<pos))
#define CLEAR_BIT(num,pos) ((num) & ~(1<<pos))
int main()
{
    int val=5,x=0XAF;
    int bit;
    bit=GET_BIT(val,2);
    printf("bit = %X\n",bit);

    x=SET_BIT(x,10);
    printf("SET x = %X\n",x);

    x=CLEAR_BIT(x,10);
    printf("CLEAR x = %X\n",x);
    return 0;
}
