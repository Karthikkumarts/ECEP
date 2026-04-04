#include<stdio.h>
int foo()
{
	static int i = 10;
	i++;
	return i;
}
int main()
{
	printf("%d\n",foo());
	printf("%d\n",foo());
	printf("%d\n",foo());
}
