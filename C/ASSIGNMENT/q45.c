/*
Name :KARTHIK KUMAR TS
Date : 03-01-2022
Description: WAP to implement the my_printf function
Sample execution: -
Test Case 1:
user@emertxe] ./my_printf
Enter a number, char, string: 20  c  Hello
Output: 20 c Hello
Do you want to continue (y/Y) : n
*/

#include <stdio.h>
#include <stdarg.h>   
int my_itoa(int num, char *ptr)
{
    int rev = 0, mod, var, mod1, num1;
    num1 = num;
    if (num < 0)
    {
        *ptr = '-' + 0;
        num = -num;
        ptr++;
    }
    while (num > 0)
    {
        mod = num % 10;
        rev = (rev * 10) + mod;
        num = num / 10;
    }
    while (rev > 0)
    {
        var = rev % 10;
        var = var + '0';
        *ptr = var;
        ptr++;
        rev = rev / 10;
    }
    while (num1)
    {
        mod1 = num1 % 10;
        if (mod1 == 0)
        {
            *ptr = 0 + '0';
            ptr++;
        }
        else
            break;
        num1 = num1 / 10;
    }
    *ptr = '\0';
}

void my_printf(char *fmt, ...)                       
{
    va_list ap;                                       
    va_start (ap, fmt);                               
    int x;
    char y, *str, var[20];                   
    while(*fmt)
    {
        if(*fmt == '%')                       
        {
            fmt++;
            switch(*fmt)                   
            {
                case 'd':
                    x = va_arg(ap, int);   
                    my_itoa(x, var);   
                    puts(var);
                    break;
                case 'c':
                    y = va_arg(ap, int);
                    putc(y, stdout);
                    break;
                case 's':
                    str = va_arg(ap, char *);
                    puts(str);
                    break;
            }
        }
        else
        {
            putchar(*fmt);
        }
        fmt++;
    }
    va_end(ap);                                               
}
int main()                                                   
{
    /* Declare the variables */
    char option;
    do
    {       
        char ch ;                                           
        char str[20];
        int num;


        my_printf("Enter a number, char, string : ");   
        scanf("%d %c %[^\n]", &num, &ch, str);           

        my_printf("Output : \n%d %c\n%s", num, ch, str);

        printf("Press (Y/y) to continue : ");
        scanf(" %c", &option);

    }while(option == 'Y' || option == 'y');               
    return 0;
}

Submission comments 	
Comments (0)
Jump to...

