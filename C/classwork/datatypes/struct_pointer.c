#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    char address[60];
};
int main()
{
    struct student s1;
    struct student *sptr=&s1;
    //(*sptr.id)=10;
    sptr->id=10;
    strcpy(sptr->name,"karthik");
   // printf("%d\n",(*sptr).id);
    printf("%d\n",sptr->id);
    printf("%s\n",sptr->name);
    sptr->id=50;
    printf("%d\n",sptr->id);
    return 0;
}
