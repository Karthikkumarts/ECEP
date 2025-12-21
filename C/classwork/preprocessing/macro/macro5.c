#include<stdio.h>
#define set_bit(num,pos)  num|(1<<pos) //0 | (1<<2)
//#define set_bit(num,pos) (num | (1<<pos))// this gives 2*4=8
int main()
{
    printf("%d\n",2 * set_bit(0,2)); //(2 * 0 | (1 << 2)) = 4
    return 0;
}
