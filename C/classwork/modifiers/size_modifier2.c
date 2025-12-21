#include<stdio.h>
int main()
{
    int num=5;
    printf("%zu:%zu:%zu\n",sizeof(int),sizeof num, sizeof 5);
    float no=10.83;
    printf("%zu:%zu:%zu\n",sizeof(float),sizeof no, sizeof 10.83);
    char ch='A';
    printf("%zu:%zu:%zu\n",sizeof(char),sizeof ch, sizeof ('A'));
return 0;
}

