#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("enter the row and column : ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
	    
    printf("enter the elements : ");
    for(i = 0 ; i < row ; i++)
    {
	for(j = 0 ; j < col ; j++)
	{
	    scanf("%d",&arr[i][j]);
	}
    }
    printf("printing the elements\n");
 /*   printf("1st %p \n",(arr[0] + 0));
    printf("2nd %p \n",(arr[0] + 1));*/
    for(i = 0 ; i < row ; i++)
    {
	for(j = 0 ; j < col ; j++)
	{
	    printf("%d ",*(arr[i]+j));
	    //printf("%d ",arr[i][j]);
	}
	printf("\n");
    }
    int large = 0 ;
    int small = arr[0][0] ;
    int sum=0;
    for(i = 0 ; i < row ; i++)
    {
	for(j = 0 ; j < col ; j++)
	{
	    if(arr[i][j] > large)
	    {
		large = arr[i][j];
	    }

	    if(arr[i][j] <  small)
	    {
		small = arr[i][j];
	    }

	    sum += arr[i][j];
	}
    }
    printf("sum : %d\n",sum);
    printf("small : %d\n",small);
    printf("large : %d\n",large);
}
