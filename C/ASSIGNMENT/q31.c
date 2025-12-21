/*
Name : KARTHIK KUMAR TS
Date : 31-12-2021
Description :WAP to print bits of float & double. Check IEEE std.
Sample execution :
Enter the Choice:
1. float
2. double
Choice: 1
Enter the float value: 2.3
Sign Exponent            Mantissa
------------------------------------------------------------------------------------
0      1 0 0 0 0 0 0 0    0 0 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1
Do you want to continue (y/Y) : n
*/
#include <stdio.h>
/* Function Prototypes for print_ieee and print_bits functions */
void print_ieee(void *ptr, int choice);
int print_bits(int n, int i);

int main()
{
    /* Declare the variables */
    float fnum;
    double dnum;
    int choice;
    char option;
    do
    {
        printf("Select the data type :\n1. float\n2. double\nChoice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the float value : ");
                scanf("%f", &fnum);
                /* Function call to print_ieee() */
                print_ieee ( &fnum, choice );
                break;

            case 2:
                printf("Enter the double value : ");
                scanf("%lf", &dnum);
                /* Function call to print_ieee() */
                print_ieee ( &dnum, choice );
                break;

            default:
                printf ("Invalid choice\n");
                break;
        }

        printf ("Press (Y/y) to continue : ");
        getchar();
        scanf (" %c", &option);
    }while (option == 'y' || option == 'Y');
    return 0;
}

/* Function defintion for print_bits() */
int print_bits(int n, int i)
{
    int k;
    /* Prints the binary representation of a number n up to i-bits. */
    for (k = i - 1; k >= 0; k--)
    {
        if ((n >> k) & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}

/* Function defintion for print_ieee() */
void print_ieee (void *ptr, int choice)
{
    signed int ival, mantissa, exponent, sign;
    signed long int lval, lmantissa, lexponent;

    /* Display format */
    printf ("\nSign\tExponent\tMantissa\n");
    printf ("----------------------------------------------------------------------------------------------------------\n");

    /* Logic to obtain binary representation of float and double value */
    switch ( choice )
    {
        case 1:
            //Type casting float value to integer to represent in binary format
            ival = *(unsigned int *)ptr;
            mantissa = (ival & 0x7fffff);  //Mask to get only 23 mantissa bits
            ival = ival >> 23;               //Remove the 23 mantessa bits by shift right
            exponent = (ival & 0xff);    //Mask to get only 8 exponent bits
            ival = ival >> 8;               //Remove the 8 exponent bits by shift right
            sign = (ival & 1);            //Mask = 1 to get only 1 sign bits

            //Print the ieee binary representation of the float value
            printf("%d\t", sign);
            print_bits(exponent, 8); //Call print_bits function to print exponent value
            printf("\t");
            print_bits(mantissa, 23); //Call print_bits function to print mantissa value
            printf("\n");
            break;

        case 2:
            //Type casting double value to integer to represent in binary format
            lval = *(unsigned long int *)ptr;
            lmantissa = (lval & 0xfffffffffffff);   //Mask to get only 23 mantissa bits
            lval = lval >> 52;                        //Remove the 52 mantessa bits by shift right
            lexponent = (lval & 0x7ff);            //Mask to get only 11 exponent bits
            lval = lval >> 11;                        //Remove the 11 exponent bits by shift right
            sign = (lval & 1);                      //Mask = 1 to get only 1 sign bits
            lval = lmantissa;
            lval = lval >> 31;                        //Shift lmantissa for 32 times

            //Print the ieee binary representation of the double value
            printf("%d\t", sign);
            print_bits(lexponent, 11); //Call print_bits function to print exponent value
            printf("\t");
            print_bits(lval, 21);      //print_bits prints for 32 times, so after 32 bits shift print the following 21 bits
            print_bits(lmantissa, 31); //Call print_bits function to print mantissa value
            printf("\n");
            break;
    }
}
