#include<stdio.h>
int main()
{
    static int num = 3;
    if (num >0)
    {
	num--;
	printf("%d",num);
	main();
    }
    else
    {
	printf("hello");
	return 0;
    }
}
