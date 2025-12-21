/*Documentation
Name        : KARTHIK KUMAR TS
Date        : 29-12-2021
Description : WAP to implement fragments using Array of Pointers
Sample execution : ./a.out
Enter no.of rows: 5
Enter the no.of columns in row[0]: 3
Enter the no.of columns in row[1]: 2
Enter the no.of columns in row[2]: 5
Enter the no.of columns in row[3]: 4
Enter the no.of columns in row[4]: 3
Enter 3 values for row[0]: 2 6 8
Enter 2 values for row[1]: 2 7
Enter 5 values for row[2]: 2 5 6 7 3
Enter 4 values for row[3]: 3 6 7 8
Enter 3 values for row[4]: 4 2 5
Before sorting output is:
2 6 8 5.33333
2 7 4.5
2 5 6 7 3 4.6
3 6 7 8 6
4 2 5 3.66667

After sorting output is:
4 2 5 3.66667
2 7 4.5
2 5 6 7 3 4.6
2 6 8 5.33333
3 6 7 8 6

Do you want to continue(y/Y):k
 */
#include<stdio.h>
#include<stdlib.h>
float *fragment(float **matrix, int n, int *row);    //function prototype
float *sort_fragment(float **matrix, int n, int *row);    //function prototype

int main()
{
    char choice;
    do{
    int n, i, j;   //declariing variables
    printf("Enter no.of rows: ");
    scanf("%d",&n);      //reading number of rows from user
    int row[n];      //declaring 1D array to store columns values for each row
    float *matrix[n];
    for(i = 0; i < n; i++)       //loop to store number of columns for each row
    {
        printf("Enter the no.of columns in row[%d]: ", i);
        scanf("%d",&row[i]);
    }
    for( i = 0; i < n ; i++)    //loop to allocate memory for colums in 2D array
    {
        matrix[i] = malloc(row[i]+1 * sizeof(int));
    }
    for(i = 0; i < n; i++)       //loop to read columns values for particular row
    {
        printf("Enter %d values for row[%d]: ", row[i], i);
        for(j = 0; j < row[i]; j++)
        {
        scanf("%f",&matrix[i][j]);
        }
    }
    matrix[n] = fragment(matrix, n, row);      //function call
    printf("Before sorting output is:\n");
    for(i = 0; i < n; i++)        //printing fragments before sorting
    {
        for(j = 0; j < row[i] + 1; j++)
        {
        printf("%g ",matrix[i][j]);
        }
        printf("\n");
    }
    matrix[n] = sort_fragment(matrix, n, row);   //function call
    printf("After sorting output is:\n");
    for(i = 0; i < n; i++)        //printing fragments after sorting
    {
        for(j = 0; j < row[i] + 1; j++)
        {
        printf("%g ",matrix[i][j]);
        }
        printf("\n");
    }
    if (matrix != NULL)
    {
        for( i = 0; i < n ; i++)    //loop to allocate memory for colums in 2D array
        {
        free(matrix[i]);
        }
    }
    printf("\nDo you want to continue(y/Y):"); 
    scanf("\n%c",&choice);
    }while (choice == 'y' || choice == 'Y');    //loop to continue the operation
    return 0;
}
float *fragment( float **matrix, int n, int *row)   //function definition to print fragments
{
    float avg;     //declaring variables
    int sum, i, j;
    for(i = 0; i < n; i++)     //loop to find sum of each row and average
    {
    sum = 0;
    for(j = 0; j < row[i]; j++)
    {
        sum += matrix[i][j];
    }
    avg = (float)sum / row[i];
    int k = row[i];
    matrix[i][k] = avg;
    }
    return *matrix;        //returning base address of matrix
}
float *sort_fragment( float **matrix, int n, int *row)  //function definition to print sorted fragments
{
    float *temp;   //declariing pointer type variable to store address of rows
    int dup, i, j;
    for(i = 1; i < n; i++)     //loop to sort the rows based on avg value of each row
    {
    for(j = 0; j < n; j++)
    {
        if( matrix[i][row[i]] < matrix[j][row[j]])  //comparing larger average value with each rows
        {
        dup = row[i];
        row[i] = row[j];
        row[j] = dup;
        temp = matrix[i];
        matrix[i] = matrix[j];
        matrix[j] = temp;
        }
    }
    }
    return *matrix;   //returning base adress of matrix
}
