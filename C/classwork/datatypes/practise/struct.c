#include<stdio.h>
#include<string.h>
struct student 
{
    int id;
    char name[20];
    char add[20];
};


int main()
{
    struct student s1 = {.id=10,.name="karthik",.add="bengaluru"};
    printf("%d %s %s\n",s1.id,s1.name,s1.add);

    struct student s2;
    s2.id=20;
    strcpy(s2.name,"megahana");
    strcpy(s2.add,"kengeri");
    printf("%d %s %s\n",s2.id,s2.name,s2.add);

    struct student s3;
    printf("enter the id :");
    scanf("%d",&s3.id);
    printf("enter the name :");
    scanf("%s",s3.name);
    printf("enter the add :");
    scanf("%s",s3.add);
    printf("%d %s %s\n",s3.id,s3.name,s3.add);

}
