/*
Name : KARTHIK KUMAR TS
Date : 30-01-2022
Description : WAP to read n and n person names print in the sorted form
Sample execution : -
Test Case 1 :
user@emertxe] ./sort
Enter the 5 names of length max 32 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai

The sorted names are :
[0] -> Agra
[1] -> Bengaluru
[2] -> Chennai
[3] -> Delhi
[4] -> Kolkata
Do you want to continue(y/Y) : n
*/

#include <stdio.h>
#include <stdlib.h>

// Declaration of functions
void print_names(char (*name)[], int total);
void sorting_names(char (*name)[], int total);
int my_strcmp(const char *str1, const char *str2);
int *my_strcpy(char *dest, char *src);
int main()                               
{
    char oper;
    do
    {
        /* Declare the Variables */
        int total;               
        int i, j;
        printf("Enter the number of names : ");
        scanf("%d", &total);
        char (*name)[32];
        name = malloc(total * 32);

        printf("Enter the %d names of length max 32 characters in each\n", total);
        getchar();
        /* For loop to read input from user */
        for (i = 0; i < total; i++)
        {
            printf("[%d] -> ", i);   
            scanf("%[^\n]", *(name + i));   
            getchar();
        }
        /* Function call for sorting */
        sorting_names(name, total);
        printf("The Sorted names are : \n");
        print_names(name, total);

        printf("Press (Y/y) to continue : ");
        scanf(" %c", &oper);
    }
    while (oper == 'Y' || oper == 'y');       
    return 0;
}
/* Function definition for sorting the names */
void sorting_names(char (*name)[32], int total)
{
    char temp1[32], temp2[32];
    int i, j, var = 0;
    for (i = 0; i < total - 1; i++)       
    {
        for (j = i + 1; j < total; j++)
        {
            var = my_strcmp(*(name + i), *(name + j));    
            if(var > 0)
            {
                my_strcpy(temp1, (*(name + i )));        
                my_strcpy((*(name + i)), (*(name + j)));      
                my_strcpy((*(name + j)), temp1);
            }
        }
    }
}
/* Function definition for print_names */
void print_names(char (*name)[32], int total)                       
{
    int i;
    for (i = 0; i < total; i++)
    {
        printf("[%d] -> %s\n", i, *(name + i));
    }
}
/* Function definition for string comparison */
int my_strcmp(const char *str1, const char *str2)   
{
    while(*str1 == *str2)
    {
        if(*str1 == '\0')
            return 0;
        *str1++;
        *str2++;
    }
    return(*str1 - *str2);
}
/* Function definition for string copy */
int * my_strcpy(char *dest, char *src)               
{
    if(dest == NULL)
    {
        return NULL;
    }

    char *ptr = dest;
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
