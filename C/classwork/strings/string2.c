#include<stdio.h>
#include<string.h>
int main()
{
    char char_array1[5]={'H','E','L','L','O'};
    char char_array2[]= "hello";
    printf("%zu\n",sizeof(char_array1));
    printf("%zu\n",sizeof(char_array2));
    printf("%zu\n",strlen(char_array2));
    return 0;
}

