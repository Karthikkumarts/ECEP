#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
int x;
for(int i = 0 ; i < argc ; i++)
{
x += atoi(argv[i]);
    
}
printf("%d\n",x);
}
