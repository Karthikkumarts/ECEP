/*
Name : KARTHIK KUMAR TS
Date : 11/1/2022
Description : To define a macro swap (t, x, y) that interchanges two arguments of type t.
Sample execution: -
Test Case 1:
user@emertxe] ./swap
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1
Enter the num1 : 10
Enter the num2 : 20
After Swapping :
num1 : 20
num2 : 10
Do you want to continue (y/Y): n
*/

#include <stdio.h>

// Define a macro 
#define swap(t, x, y) {  \
    t z = x;\
    x = y;\
    y = z; }

int main()
{
    /* Declare the variables */
    int x, y, option;
    char a, b, choice;
    float c, d;
    short e, f;
    double g, h;
    char str1[100], str2[100], *ptr1, *ptr2;

    /* do while for continue prompt */
    do
    {
    printf("1. int\n2. char\n3. float\n4. short\n5. double\n6. string\nEnter your choice : ");
    scanf("%d", &option);

    switch (option)
    {

        case 1:
            printf("Enter the num1 : ");
            scanf("%d", &x);
            printf("Enter the num2 : ");
            scanf("%d", &y);
            swap (int, x, y);
            printf("After swapping :\nnum1 : %d\nnum2 : %d\n", x, y);
            break;

        case 2:
            printf("Enter char1 : ");
            scanf(" %c", &a);
            printf("Enter char2 : ");
            scanf(" %c", &b);
            swap (char, a, b);
            printf("After swapping :\nchar1 : %c\nchar2 : %c\n", a, b);
            break;

        case 3:
            printf("Enter the num1 : ");
            scanf(" %f", &c);
            printf("Enter the num1 : ");
            scanf(" %f", &d);
            swap (float, c, d);
            printf("After swapping :\nnum1 : %g\nnum2 : %g\n", c, d);
            break;

        case 4:
            printf("Enter the num1 : ");
            scanf(" %hd", &e);
            printf("Enter the num2 : ");
            scanf(" %hd", &f);
            swap (short, e, f);
            printf("After swapping :\nnum1 : %hd\nnum2 : %hd\n", e, f);
            break;
        case 5:
            printf("Enter num1 :");
            scanf(" %lf", &g);
            printf("Enter num2 :");
            scanf(" %lf", &h);
            swap (double, g, h);
            printf("After swapping :\nnum1 : %lf\nnum2 : %lf\n", g, h);
            break; 
        case 6:
            printf("Enter string1 : ");
            scanf(" %[^\n]", str1);
            printf("Enter string2 : ");
            scanf(" %[^\n]", str2);
            ptr1 =  str1;
            ptr2 = str2;
            swap (char *, ptr1, ptr2);
            printf("After swapping :\nstr1 : %s\nstr2 : %s\n", ptr1, ptr2);
            break;
    }    

    printf("Press (Y/y) to continue : ");
    scanf(" %c", &choice);

    }while (choice == 'Y' || choice == 'y');
    return 0;
}
