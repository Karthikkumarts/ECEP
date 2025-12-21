#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    char add[20];
};

struct student data(struct student *s1)
{
     s1->id = 10;
     strcpy(s1->name,"karthiik");
     strcpy(s1->add,"bengaluru");
}
int main()
{
  struct student s1;
  data(&s1);
  printf("%d\n",s1.id);
  printf("%s\n",s1.name);
  printf("%s\n",s1.add);
}
