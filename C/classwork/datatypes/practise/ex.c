#include<stdio.h>
#include<string.h>
struct name_address
{
    float marks;
    char name[20];
    char add[20];
};

struct student
{
int id;
struct name_address name_address;
};


int main()
{
    struct student s1;
    strcpy(s1.name_address.name,"kat");
    printf("%s\n",s1.name_address.name);
    s1.name_address.marks=10.75;
    printf("%g\n",s1.name_address.marks);
}
