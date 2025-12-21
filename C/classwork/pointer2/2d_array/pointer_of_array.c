#include<stdio.h>
void fun(int row,int col,int (*p)[col]);
int main()
{
     int array[3]={1,2,3};
       int (*ptr)[3];
       ptr=&array;
       printf("%d\n",**ptr);
       printf("%u\n",*ptr);
       printf("%u\n",*ptr+1);
       printf("%u\n",*((*(ptr)+1)));


//    int (*p)[3];
    int a[2][3]={{1,2,3},{4,5,6}};
    fun(2,3,a);
    return 0;
}
void fun(int row,int col,int (*p)[col])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
	for (j = 0; j < col; j++)
	{
	    printf("%d ", p[i][j]);
	}
	printf("\n");
    }
}
