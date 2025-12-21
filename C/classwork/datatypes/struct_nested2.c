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
}college;

struct col
{
    struct student stud;
    struct faculty facu;
};


int main()
{
    struct college member={{10,"raju","banglore"},{20,"pooja","udpi"}} ; 
    struct college *cptr;
    cptr = &member;

    printf("%d\n",cptr->student.id);
    printf("%d\n",cptr->faculty.id);
}

