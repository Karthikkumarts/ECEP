/*
Name             :KARTHIK KUMAR TS
Date              :15/12/2021
Description      :Factorial for given number using recursive method.
sample input     :Enter the value of N: 7
sample output     :Factorial of 7 is: 5040
 */
#include<stdio.h>
int main()
{
    char ch;
    static int num, number,  fact = 1, flag = 0; //declare variables as static storage class
    if (flag == 0) //User enter option run only one time
    {
        printf("Enter the value of N :" );
        scanf("%d",&num);
        number = num;
    }
    if (num >= 1) //find factorial of given number
    {
        fact = fact * num--;
        flag = 1;  //flag bit set as 1 for avoid printing user printing option
        main();  //recursive function call untill num value decremented by 1
    }
    else
    {
        if (number >= 0) // if number is negative print error message
            printf("Factorial of %d is : %d\n ",number,fact);
        else
            printf("Error : Invalid Input");
        printf("\nDo you want to continue(y/Y) : ");
        scanf("\n%c",&ch);
        if (ch == 'y' || ch == 'Y' ) //After the continue option set all static variable as initial value
       {
            flag = 0;
            fact = 1;
            main();
       }
    }
    return 0;
}
