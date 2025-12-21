/*
Name : KARTHIK KUMAR TS
Data : 10/12/21
Description  : Write a program to implement my_scanf() function. 
Sample execution: -
Test Case 1:
user@emertxe] ./my_scanf
Enter a number: 20
You entered 20
Enter a string: Hii
You entered Hii
Enter a character : a
You entered a
Enter float number : 12.45
You entered 12.45
Do you want to continue (y/Y) : n
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdio_ext.h>
#include <stdlib.h>

/* Function Prototypes for my_scanf and my_atoi functions */
void my_scanf(const char *arg, ...);
int atoi_ati(const char *str);

int main()
{
    char option;
    do
    {
        /* Declare the varaibles */
        char ch;

        /* Read user inputs by calling the my_scanf() */
        printf("Enter a character : ");
        my_scanf(" %c", &ch);
        printf("You entered %c\n", ch);
        while ((ch = getchar()) != '\n');

        int num;
        printf("Enter a number : ");
        my_scanf (" %d", &num);
        printf ("You entered %d\n", num);

        char str[100];
        printf("Enter the string : ");
        my_scanf(" %s", str);
        printf("You entered %s\n", str);

        float f;
        printf("Enter a float number : ");
        my_scanf("%f", &f);
        printf("You entered %f\n", f);

        double d;
        printf("Enter a double number : ");
        my_scanf("%lf", &d);
        printf("You entered %lf\n", d);

        printf ("Press (Y/y) to continue : ");
        my_scanf (" %c", &option);
        getchar();
    } while(option == 'y' || option == 'Y');
    return 0;
}

/* Function Definition for my_scanf() */
void my_scanf(const char *format, ...)
{
    /* Declare the varaibles */
    va_list ap;
    const char *arg = format;
    va_start(ap, format);
    int *n;
    char *ch, str1[100], *str;
    float *fp;
    double *dp;

    while (*arg)
    {
        /* Check for format specifier */
        if (*arg == '%')
        {
            switch (*++arg)
            {
                case 'c':
                    ch = va_arg (ap, char *);
                    *ch = getchar(); 
                    break;
                case  'd':
                    fgets(str1, 10, stdin);
                    n = va_arg(ap, int *);
                    *n = atoi_ati(str1);
                    break;
                case 's':
                    str = (char *)(va_arg (ap, char *));
                    int count = 0;
                    for (char ch = getchar(); ch != 10; ch = getchar())
                    {
                        str[count] = ch;
                        count++;
                    }
                    str[count] = '\0';
                    break;
                case 'f':
                    fgets(str1, 10, stdin);
                    fp = va_arg(ap, float *);
                    *fp = atof(str1);
                    break;
                case 'l':
                    fgets(str1, 10, stdin);
                    dp = va_arg(ap, double *);
                    *dp = atof(str1);
                    break;
            }
        }
        arg++;                
    }
    va_end ( ap );
}
/* Function defintion for my_atoi() */
int atoi_ati(const char *ptr)
{
    int x = 0, flag = 1, count = 0;
    while (*ptr)
    {
        while(count == 0)
        {
            if (flag == 1 && *ptr == '-')
            {
                flag = -1;
                ptr++;
            }
            else if (flag == 1 && *ptr == '+')
            {
                flag = 1;
                ptr++;
            }
            count++;
        }

        if (*ptr >= 48 && *ptr <= 57)
        {
            x = (x * 10) + (*ptr - '0');
            ptr++;
        }
        else
            break;

    }
    return x * flag;
}
