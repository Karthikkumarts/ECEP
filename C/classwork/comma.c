#include<stdio.h>
int main()
{ 
 int i=10;
char j= 2;
printf("%zu\n",sizeof(i,j));
printf("%zu\n",sizeof(j,i));
printf("%zu\n",(sizeof i,j));
return 0;

}
