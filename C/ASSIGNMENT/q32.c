/*Documentation
Name : KARTHIK KUMAR TS
Date : 29-12-2021
Description : WAP to generate a n*n magic square
Sample execution : ./a.out

*/
#include<stdio.h>
#include<stdlib.h>
int *magic_square(int **magic, int n);  //funtion prototype

int main()
{
    char ch;
    do{
	int n, i, j;
	printf("Enter a number: ");
	scanf("%d", &n);

	int *magic[n];
	for ( i = 0; i < n; i++)
	{
	    magic[i] = malloc( n * sizeof(int));
	}
	if(n % 2 != 0)
	{
	    magic[n] = magic_square(magic, n);
	    for(i = 0; i < n; i++)
	    {
		for(j = 0; j < n; j++)
		{
		    printf("%4d ",magic[i][j]);
		}
		printf("\n\n");
	    }
	}
	else
	{
	    printf("Please enter only odd numbers\n");
	}
	if(magic != NULL)
	{
	    for ( i = 0; i < n; i++)
	    {
		free(magic[i]);
	    }
	}
	printf("Do you want to continue(y/Y):");
	scanf(" %c",&ch);
    }while (ch == 'y' || ch == 'Y');
    return 0;
}
int *magic_square(int **magic, int n)
{
    int i, j, col, p, q, mid;
    mid = n / 2;
    for(i = 0;i < n; i++)
    { 
	for(j = 0; j < n; j++)
	{
	    magic[i][j] = 0;
	}
    }
    col = mid;
    j = 0;
    for(i = 1; i <= n*n; i++)
    {
	magic[j][col] = i;
	p = j--;
	q = col++;

	if(j < 0)
	{
	    j = n - 1;
	}
	if(col > n - 1)
	{
	    col = 0;
	}
	if(magic[j][col] != 0)
	{
	    col = q;
	    j = p + 1;
	}
    }
    return *magic;
}
