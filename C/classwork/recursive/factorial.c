#include<stdio.h>
int fact( int num);
int main()
{
    int n=3;
    printf(" factorial of %d is  %d\n",n,fact(n));
    return 0;
}
int fact( int num)
{
if (num==1)
    return 1;
else
    return num * fact(num - 1);

}
