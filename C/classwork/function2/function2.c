#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int sum=0;
    int i=0;
   while(argv[i] != NULL)
   // for(i=0;(argv[i] !=NULL);i++)
    {
	printf("%s\n",argv[i]);
	int x = atoi(argv[i]);
	sum=sum+x;
	i++;
    }
    printf("sum = %d\n",sum);
    printf("average = %g\n",(float) sum/(argc - 1));
    return 0;
}
