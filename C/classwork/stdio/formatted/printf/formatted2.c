#include<stdio.h>
int main()
{
    char a[ ]={'A','B','C','D','\0'}; //use null character
    printf(a);
    printf("\nsize of a is %zu",sizeof(a));
}
