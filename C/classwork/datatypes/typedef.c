#include<stdio.h>
typedef struct //student
{
    int id;
    char name[20];
} d,v;

int main()
{
    v var;
    var.id=10;
    printf("%d",var.id);
}

