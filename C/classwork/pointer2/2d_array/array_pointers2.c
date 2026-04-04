#include<stdio.h>
int main()
{
    int a[3]={10,20,30};
    int b[4]={40,50,60,100};
    int c[3]={70,80,90};
    int size[3]={3,4,3};
    int *ptr[3];
    ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;
    for(int i=0;i<3;i++)
    {
	//for(int j=0;j<3;j++) //have purposefully added 4 check it , solution as below
        for(int j =0 ;j < size[i] ; j++)
	{
	//    printf("%d\n",ptr[i][j]);
	    printf("%d ",*((ptr[i])+j));

	}
	printf("\n");
    }
}
