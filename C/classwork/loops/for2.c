#include<stdio.h>
int main ()
{
    int i=0; //can be deleted this line
    for(i=0 ;i<5;i++ )
    {
    if (i==3)
	printf("loop %drd time\n",i);
    }
    printf("i---->%d\n",i);
    return 0;
}

