#include<stdio.h>
//pass by value
struct student
{
    int id;
    char name[20];
    char address[60];
};
int data(struct student s ) 
{
    s.id=10;
   return s.id;
}

int main()
{
    struct student s1;
    s1.id = data(s1);
    printf("%d\n",s1.id);
    return 0;
}
