#include<stdio.h>
#include<stdlib.h>
int main()
{
char name[10];
char id[10];
scanf("%[a-z A-Z\n]",name);
printf("name is %s\n",name);
/* need to adress a issue here !!! */
scanf("%[0-9]",id);
printf("id is %s\n",id);
return 0;
}
