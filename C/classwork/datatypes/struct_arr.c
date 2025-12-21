#include<stdio.h>
struct student
{
    int id;
    char name[20];
    char address[60];
};

int main()
{
    struct student s[3];
    int i;
    for( i=0;i<3;i++)
    {
	scanf("%d",&s[i].id);
	scanf("%s",s[i].name);
	scanf ("%s",s[i].address);
    }
    for(i=0;i<3;i++)
    {
	printf("s[%d] id =%d\n",i,s[i].id);
	printf("s[%d] name is %s\n",i,s[i].name);
	printf("s[%d] address is %s\n",i,s[i].address);
    }
}
