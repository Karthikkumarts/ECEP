/*
Name : KARTHIK KUMAR TS
Date : 30-01-2022
Description : WAP to demote the type of given float number to integer using bitwise operators and bitfields.
Sample execution: -
Test Case 1:user@emertxe] ./demoted_int
Enter any float number : 23.76
Demoted value is 23.000000
Do you want to continue (y/Y) : y
Enter any float number : -3.76
Demoted value is -3.000000
Do you want to continue (y/Y) : y
Enter any float number : 0.76
Demoted value is 0.000000
Do you want to continue (y/Y) : y
Enter any float number : 1.76
Demoted value is 1.000000
Do you want to continue (y/Y) : n
*/

#include <stdio.h>
union float_value
{
    float num;
    struct
    {
        unsigned mantissa : 23;
        unsigned exponent : 8;
        unsigned sign : 1;
    }fbits;
}uf;

int main()
{
    char ch;
do
{
    int no_bits;   
       
    printf("Enter any float number : ");   
    scanf("%f", &uf.num);
       
    no_bits = uf.fbits.exponent - 127;   //subtract exponent value with 127     
         
    if (no_bits <= 0 && uf.num > -1)   //if the value is less then equal to zero and greater then 1 if its true then assign  0 with float num   
    {
        uf.num = 0;
    }
    else        //else do following operation for other number
    { 
               
        if (uf.fbits.sign == 1)   //sign bit is 1 then or with that number with -
            uf.num = - ((1 << no_bits) | (uf.fbits.mantissa >> (23 - no_bits)) );
 
        else                //sign bit is 0 then or with that number with +           
            uf.num = ((1 << no_bits) | (uf.fbits.mantissa >> (23 - no_bits)) );
    }
               
        printf("Demoted value : %f\n",uf.num);       
       
        printf("Press (Y/y) to continue : ");
        scanf(" %c", &ch);
    
}while (ch == 'Y' || ch == 'y');
    return 0;
}
