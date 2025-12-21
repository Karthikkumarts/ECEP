#include<stdio.h>
#include<string.h>

//pass by value

struct student
{
    int id;
    char name[20];
    char address[60];
};
struct student data(struct student s )
{
    s.id=10;
    strcpy(s.name,"karthik");
    strcpy(s.address,"banglore");
    return s;

}

int main()
{
    struct student s1;
    s1=  data(s1);
    printf("%d\n",s1.id);
    printf("%s\n",s1.name);
    printf("%s\n",s1.address);
    return 0;
}
