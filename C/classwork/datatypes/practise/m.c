#include<stdio.h>
struct student {
    int id;
    char name[20];
};
void scan(struct student *s,int size)
{
    int i = 0 ;
    for(i = 0 ; i < size ; i++)
    {
	printf("enter the details of structure[%d]\n",i);
	printf("enter the id : ");
	scanf("%d",&s[i].id);
	printf("\nenter the name : ");
	scanf("%s",s[i].name);
    }
}

void print(struct student *s,int size)
{
    int i = 0 ;
    for(i = 0 ; i < size ; i++)
    {
	printf("printing the details of structure[%d]\n",i);
	printf(" id[%d] : %d ",i,s[i].id);
	printf(" namep[%d] : %s ",i,s[i].name);
    }
}
int main()
{
   struct student s[3];
   scan(s,3);
   print(s,3);
}
