#include<stdio.h>
int main()
{
    int n,m;
    int row,col;
    printf("enter the column size:");
    scanf("%d %d",&m,&n);
    int  arr[m][n];
    int arr2[m];
    printf("enter the elements of matrix\n");
    for(row=0;row<m;row++)
    {
	for (col=0;col<n;col++)
	{
	    scanf("%d",&arr[row][col]);
	}
    }
    printf("printing the 2D array\n");
    for(row=0;row<m;row++)//printing a single row at a time
    {
	for (col=0;col<n;col++)
	{
	    printf("%4d ",arr[row][col]);
	}
	printf("\n"); // to format thr output for next row
    }
    int sum=0;
    int max=0; 
    int small=arr[0][0];
    int p=0;
    for(row=0;row<m;row++)
    {
	for (col=0;col<n;col++)
	{
	    sum=sum+(arr[row][col]);
	    if (arr[row][col] > p)
	    {
		p=arr[row][col];
	    }
	    if (arr[row][col] > max)
		max=arr[row][col];
	    if  (small > arr[row][col])
		small=arr[row][col];
	}
	    printf("max value of row[%d] = %d\n",row,p);
	arr2[row]=p;
	    p=0;
    }
    int min=arr2[0];
    for(int j=1;j<m;j++)
    {
    if( min > arr2[j])
	min=arr2[j];
    }
    printf("max_min value of row  = %d\n",min);
    printf("sum of matrix is %d\n",sum);
    printf("largest element of matrix is %d\n",max);
    printf("smallest element of matrix is %d\n",small);
}
