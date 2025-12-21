#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    char address[60];
};
void print(struct student *s,int size);
void print(struct student *s,int size)
{
    int i;
    for( i=0;i<size;i++)
    {
	printf("s[%d] id =%d\n",i,s[i].id);
	printf("s[%d] name is %s\n",i,s[i].name);
	printf("s[%d] address is %s\n",i,s[i].address);
    }
}

int main()
{
    int size;
    printf("enter the size");
    scanf("%d",&size);
    struct student s[size];
    int i;
    for( i=0;i<size;i++)
    {
	scanf("%d",&s[i].id);
	scanf("%s",s[i].name);
	scanf ("%s",s[i].address);
    }

    print(s,size);
}
