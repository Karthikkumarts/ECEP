#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a ,row,col;
	printf("enter the row and col size : ");
	scanf("%d %d",&row,&col);
	a=(int **)malloc(row * sizeof(int *));
	for(int j = 0 ; j < row ; j++)
	{
		a[j] = (int*)malloc(col * sizeof(int));
	}

	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < col ; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

