#include<stdio.h>
int main()
{

struct 
{
    int id;    
    char name[20];
    char address[60];
}s1,s2,s[5],*sptr; //s1,s2 are struct variable ,str[5] --> array of struct ,*sptr pointer  <---are local variables

s1.id =10;
printf("%d\n",s1.id);
sptr->id=10;
printf("%d\n",sizeof(sptr->id));
return 0;
}
