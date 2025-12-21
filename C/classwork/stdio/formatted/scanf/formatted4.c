#include<stdio.h>
int main()
{
    char ch[100];
    printf("enter the string:");
    scanf("%[^\n]s",ch); //read all character untill \n 
    printf("entered str is %s\n",ch);
}
