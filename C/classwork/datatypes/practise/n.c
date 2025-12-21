#include<stdio.h>
struct student {
int id;
char name[20];
}*PTR;
int main()
{
    PTR p;
    p->id =10;
    printf("%d",p->id);
}

