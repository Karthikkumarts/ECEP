#include<stdio.h>
int main()
{
    int n,m;
    int row,col;
  /*  printf("enter the row size:");
    scanf("%d",&m);*/
    printf("enter the column size:");
    scanf("%d %d",&m,&n);
    int  arr[m][n];
    for(row=0;row<m;row++)
    {
	for (col=0;col<n;col++)
	{
	    scanf("%4d",&arr[row][col]);
	}
    }

    printf("printing the 2D array\n");
    for(row=0;row<m;row++)
    {
	//printing a single row at a time
	for (col=0;col<n;col++)
	{
	    printf("%4d ",arr[row][col]);
	}
	printf("\n"); // to format thr output for next row
    }
}
