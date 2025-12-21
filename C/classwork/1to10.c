#include<stdio.h>
void res(int num );
int main()
{
    res(1);
    return 0;
}
void res(int num)
{
    printf("%d\n",num);
if (num < 10)
 res( ++num);
}

