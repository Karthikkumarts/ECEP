#include<stdio.h>
int main()
{
    int num=7;
    int res= num << 3;
    printf("%d\n",res);
    for(int i=7;i>=0;i--)
	res&(1<<i)?printf("1 "):printf("0 ");
}
