#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
    int sum = 0,i=0;
    while(argv[i] != NULL)
    {
	sum += atoi(argv[i]);
	i++;
    }
printf("%d\n",sum);

}
