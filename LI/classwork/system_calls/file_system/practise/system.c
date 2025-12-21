#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[200];
    printf("enter the command to be exceuted : ");
    scanf("%[^\n]s",str);
    printf("executing the %s command\n",str);
    system(str);
    printf("done\n");
}
