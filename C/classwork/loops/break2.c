#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
	for(j=0;j<3;j++) //observe when brackets are given
	    if(i==3)
		break;
	    printf("loop %d\n",j);
    }
    printf("%d\n",i);
}
