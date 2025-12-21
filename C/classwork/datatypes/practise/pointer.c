#include<stdio.h>
struct student 
{
    int id;
    char name[20];
    char add[20];
};

int main()
{
    struct student s1;
    struct student *sptr=&s1;
    sptr->id=10;
    printf("%d",sptr->id);
}
