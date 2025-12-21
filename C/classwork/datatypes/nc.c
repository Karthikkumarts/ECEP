#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[10];
};
void data(struct student *s)
{
s[1].id=10;
strcpy(s[1].name,"karthik");
s[2].id=20;
strcpy(s[2].name,"ka");
}
int main()
{
struct student s[2];
data(s);
printf("%d\n",s[1].id);
printf("%s\n",s[1].name);
printf("%d\n",s[2].id);
printf("%s\n",s[2].name);
}
