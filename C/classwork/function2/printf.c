#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int my_printf(char *format,...);
int my_printf(char *format,...)
{
    va_list ap;
    float x; //int x for %d
    va_start(ap,format);

    while(*format)
    {
	if (*format == '%')
	{
	    format++;
	    if(*format == 'f')
	    {
	//	x=va_arg(ap,int); // for %d
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
    my_printf("hello world\n");
    my_printf("good afternoon !! have a nice day\n");
    my_printf("done\n");
    my_printf("the value passed is %f",12.350000);
}
