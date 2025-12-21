#include <stdio.h>
int main()
{
register int i = 0;
scanf("%d", &i); // cant use &i
printf("i %d\n", i);
}
