#include<stdio.h>
int main()
{
    int arr[3][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}
    };
    int max_rows=3,max_cols=4;
    int row=0,col;
  /*  printf("printing the 2D array\n");
    printf("1st %u \n",(arr[0] + 0));
    printf("2nd %u \n",(arr[0] + 1));
    printf("2 row nd %u \n",(arr[1] + 0));*/

    printf("%u \n",(arr + 0)[0]);
    printf("%u \n",((arr + 2))[1]);

    for(row=0;row<max_rows;row++)
    {
	//printing a single row at a time
	for (col=0;col<max_cols;col++)
	{
	   // printf("%4d ",(*(arr+row))[col]);
	   // printf("%4d ",arr[row][col]);
	    printf("%4d ",*(arr[row]+col));
	}
	printf("\n"); // to format thr output for next row
    }
}
