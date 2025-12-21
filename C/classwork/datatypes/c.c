#include<stdio.h>
struct student
{
    int a;
};
struct students
{
    int a;
}s1;
typedef struct
{
    int a;
}s2;
int main()
{
    struct student s;
    s.a=10;
    printf("%d\n",s.a);
    s1.a=20;
    printf("%d\n",s1.a);
    s2 sp;
    sp.a=30;
    printf("%d\n",sp.a);
}
