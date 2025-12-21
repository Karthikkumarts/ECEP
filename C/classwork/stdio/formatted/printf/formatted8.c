#include <stdio.h>
int main()
{
int num=100, ret;
printf("The enter a number [is 100 now]: ");
ret = scanf("%d", &num);
printf("%d\n",ret);
if (ret != 1)
{
printf("Invalid input. The ret is still %d\n", ret);
return 1;
}
else
{
printf("ret is modified with %d\n", ret);
}
}
