#include<stdio.h>
#include<string.h>
struct student 
{
    int id;
    char name[20];
    char address[20];
}student;

int main()
{
    struct student s[3];
    for(int i =0;i<3;i++)
    {
	scanf("%d",&s[i].id);
	scanf("%s",s[i].name);
	scanf("%s",s[i].address);
    }

    for(int i=0;i<3;i++)
    {
	printf("s[%d] id is  %d\n",i,s[i].id);
	printf("s[%d] id is  %s\n",i,s[i].name);
	printf("s[%d] id is  %s\n",i,s[i].address);
    }
}


