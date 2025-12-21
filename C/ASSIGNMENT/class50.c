#include<stdio.h>
int main()
{
	char ch;
	int n,m;
	int row,col;
    do
    {
	printf("enter row and column size:");
	scanf("%d %d",&m,&n);
	int  arr[m][n];
	int  arr2[m][n];
	int  arr3[m][n];

	for(row=0;row<m;row++)
	{
	    for (col=0;col<n;col++)
	    {
		scanf("%4d",&arr[row][col]);
	    }
	}

	printf("matrix is \n");
	for(row=0;row<m;row++)
	{
	    for (col=0;col<n;col++)
	    {
		printf("%4d",arr[row][col]);
	    }
	    printf("\n");
	}

	for(row=0;row<n;row++)
	{
	    for (col=0;col<m;col++)
	    {
		arr2[row][col]=arr[col][row];
	    }
	}
	printf("printing transpose of matrix\n");
	for(row=0;row<n;row++)
	{
	    for (col=0;col<m;col++)
	    {
		printf("%4d", arr2[row][col]);
	    }
	    printf("\n");
	}
	int sum=0;
	for(row=0;row<m;row++)
	{
	    for (col=0;col<n;col++)
	    {
		for(int brow=0;brow<m;brow++)
		{
		    sum += arr[row][brow]*arr2[brow][col];
		}
		arr3[row][col]=sum;
		sum=0;
	    }
	}

	printf("the matrix multiplication\n");
	for(row=0;row<m;row++)
	{
	    for (col=0;col<m;col++)
	    {
		printf("%4d", arr3[row][col]);
	    }
	    printf("\n");
	}
	printf("do you want to continue press y or Y:");
	getchar();
	scanf("%c",&ch);
    }
    while(ch == 'y' || ch == 'Y');
    return 0;
}
