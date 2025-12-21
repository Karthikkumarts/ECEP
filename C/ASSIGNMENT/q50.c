/*
Name : KARTHIK KUMAR TS
Date : 31/12/2021
Description : WAP to find the product of given matrix.
Inputs : No.of rows, Columns and row * column values.
Sample output:
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Transpose of given Matrix :
1      1     1
2      2     2
3      3     3
Product of two matrix :
14      14      14
14      14      14
14      14      14
Do you want to continue(Y/y)? : N
*/

#include <stdio.h>
#include <stdlib.h>

/* Function definition for printing the matrix */
void print_matrix(int **arr, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    /* Declaring the variables */
    int row, col, i, j, k, **arr, **arr_t, **arr_p, sum;
    char choice;

    /* do while for continue prompt option */
    do
    {
    printf("Enter number of rows : ");
    scanf("%d", &row);

    printf("Enter number of columns : ");
    scanf("%d", &col);

    printf("Enter the values for %d x %d matrix :\n", row, col);

    /* Dynamic memory allocation */
    arr = malloc(row * sizeof(int));
    for (i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    /* Reading matrix values from user */
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The given matrix is :\n");
    print_matrix(arr, row, col);        /* Function call for printing the matrix */

    arr_t = malloc(col * sizeof(int));
    for (i = 0; i < col; i++)
    {
        arr_t[i] = (int *)malloc(row * sizeof(int));
    }

    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            arr_t[i][j] = arr[j][i];
        }
    }
    printf("Transpose of given Matrix :\n");
    print_matrix(arr_t, col, row);

    arr_p = malloc(row * sizeof(int));
    for (i = 0; i < row; i++)
    {
        arr_p[i] = (int *)malloc(col * sizeof(int));
    }

    printf("\nProduct of two matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            sum = 0;
            for ( k = 0; k < col; k++)
            {
                sum = sum + (arr[i][k]) * (arr_t[k][j]);
            }
            arr_p[i][j] = sum;
        }
    }
    print_matrix(arr_p, row, row);

    printf("Press (Y/y) to continue : ");
    scanf(" %c", &choice);
    
    }while (choice == 'Y' || choice == 'y');

    return 0;
}
