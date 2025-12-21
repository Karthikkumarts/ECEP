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
  //struct student s1={10,"KARTHIK","anchepalya banglore"}; //initializing
    struct student s1={.name="KARTHIK",.address="anchepalya banglore",.id=10}; //initializing
    printf("%zu\n",sizeof(struct student));
    printf("%zu\n",sizeof(s1));
    printf("id = %d , name-%s , address-%s\n",s1.id,s1.name,s1.address);

    struct student s2;
    s2.id=20;
    strcpy(s2.name,"emertxe");
    strcpy(s2.address,"kengeri");
    printf("id = %d , name-%s , address-%s\n",s2.id,s2.name,s2.address);

    printf("%lu\n",&s1.id);
    printf("%lu\n",s1.name);
    printf("%lu\n",s1.address);
    printf("%lu\n",&s1.address+1);

/*    struct student s3;
    printf("enter id:");
    scanf("%d",&s3.id);
    printf("enter the name:");
    scanf("%s",s3.name);
     printf("enter address:");
    scanf("%s",s3.address);
    printf("id = %d,name-%s,address-%s\n",s3.id,s3.name,s3.address);*/
}
