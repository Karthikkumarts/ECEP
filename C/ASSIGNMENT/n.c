#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **arr=malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++)
	*(arr + i) = malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
	for (int j = 0; j < 3; j++)
	    printf("%d\t", *(*(arr + i) + j));
	printf("\n");
    }
}
