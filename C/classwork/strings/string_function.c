#include<stdio.h>
void print_string(char *str)
{
    while (*str != '\0')
    {
	printf("%c",*str++);
//	str++;
    }
	printf("\n");
}
void alternate_print_string(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
printf("%c",str[i]);
i++;
    }
}
int main()
{
    char msg[]="hello";
    char arr[] = "hello world";
    print_string(msg);
    alternate_print_string(arr);
    print_string("\n");
   alternate_print_string("hello\n");
    return 0;
}
    


