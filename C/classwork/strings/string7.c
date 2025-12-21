#include <stdio.h>
int main()
{
char str[6];
fgets(str,6, stdin);
printf("The string is: %s\n", str);
scanf("%2[^\n]", str);
printf("The string is: %s\n", str);
}
