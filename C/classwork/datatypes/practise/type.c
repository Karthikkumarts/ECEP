#include<stdio.h>
typedef int integer;
typedef char character;
struct student
{
    integer id;
    character name[20];
};
int main()
{
struct student s;
s.id=10;
printf("%d\n",s.id);
}
