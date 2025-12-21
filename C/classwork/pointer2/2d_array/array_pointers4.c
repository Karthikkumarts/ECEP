#include<stdio.h>
int main()
{
    int arr[3][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},    
	};
    int max_rows=3,max_cols=4;
    int row,col;
    int *ptr[3];
    ptr[0]=arr[0] , ptr[1] = arr[1] , ptr[2] = arr[2];



    printf("printing the 2D array\n");
    for(row=0;row<max_rows;row++)
    {
	//printing a single row at a time
	for (col=0;col<max_cols;col++)
	{
	    printf("%4d ",ptr[row][col]);
	   // printf("%4d ",ptr[row][col]);
	}
	printf("\n"); // to format thr output for next row
    }
}
