#include <stdio.h>
int main()
{
int x = 7, y = 7;
x = 7 << 32; //because max shift is only 31 so it shows 0
printf("x is %x\n", x);
x = y << 32;
printf("x is %x\n", x);
return 0;
}
