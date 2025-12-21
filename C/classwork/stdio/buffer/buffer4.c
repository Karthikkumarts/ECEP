#include<stdio.h>
#include<unistd.h>
int main()
{
int num;
while(1)
{
    printf("enter the number:");
    scanf("%d",&num);
    sleep(5);
}
return 0;
}
