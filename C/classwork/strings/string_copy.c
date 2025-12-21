/*description : program to demonstrate usage of stcpy builtin function 
* strcpy() function copies the string pointed to by src , including ('\0) null character to destination 
* the destination string must be large enough to receive the  copy*/
#include<stdio.h>
#include<string.h>
int main()
{
    char *src_str="hello world";
    char dest_str[13];
    strcpy(dest_str,src_str);
    printf("dest_str = %s\n",dest_str);
    return 0;
}
