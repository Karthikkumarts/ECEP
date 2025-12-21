#include<stdio.h>
struct student 
{
    int id;
    char name[20];
    char add[20];
};
int main()
{
    int size;
    printf("enter the students size : ");
    scanf("%d",&size);
    struct student s[size];
   for(int i = 0 ; i < size ; i++)
   {
       printf("enter the s[%d] id  : ",i);
       scanf("%d",&s[i].id);
       printf("enter the s[%d] name  : ",i);
       scanf("%s",s[i].name);
       printf("enter the s[%d] add  : ",i);
       scanf("%s",s[i].add);
   }

   for(int i = 0 ; i < size ; i++)
   {
       printf("s[%d] : %d\n",i,s[i].id);
       printf("s[%d] : %s\n",i,s[i].name);
       printf("s[%d] : %s\n",i,s[i].add);
   }

}
