#include<stdio.h>
struct college
{
    struct student 
    {
	int id;
	char name[20];
	char address[60];
    }student;

    struct faculty
    {
	int id;
	char name[20];
	char address[60];
    }faculty;
}c1;

int main()
{
    c1.student.id=10;
    c1.faculty.id=20;
    printf("%d\n",c1.student.id);
    printf("%d\n",c1.faculty.id);
}

