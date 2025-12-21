#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int my_scanf(char *format,...);
int my_scanf(char *format,...)
{
    va_list ap;
    float x;
    va_start(ap,format);

    while(*format)
    {
	if (*format == '%')
	{
	    format++;
	    if(*format == 'f')
	    {
		x=((float)va_arg(ap,double));
		    fprintf(stdout,"%f",x);
		    format++;

	    }
	}
	else
	{
	    putchar(*format);
	    format++;
	}
    }
}
int main()
{
    my_scanf("the value passed is %f",12.350000);
}
