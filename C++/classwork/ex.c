#include<stdio.h>
#pragma pack(1)
struct student
{
    int id;
    double num;
    double i;
};

int main()
{
    struct student s;
    printf("%d\n",sizeof(s));
}

