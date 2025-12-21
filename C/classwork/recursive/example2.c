#include<stdio.h>
int fun(int num);
int main()
{
    int n=3;
    int res =fun(3);
    printf("in main-->%d\n",res);
    return 0;

}
int fun(int num)
{
    if (num > 0)
    {
	return fun(num-1)+fun(--num);
    }
    return 1;
}
