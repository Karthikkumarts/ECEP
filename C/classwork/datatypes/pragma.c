#include<stdio.h>
#pragma pack(1)
struct student 
{
    char ch1;
    int num;
    char ch2;
};
int main()
{
    struct student stud;
    printf("%lu\n",sizeof(stud));
}
