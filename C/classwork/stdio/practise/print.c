#include<stdio.h>
int main()
{
    int a =10;
    char ch = 'a';
    float num = 20.365;
    char name[]="karthik kumar";
    char string2[100];
    sprintf(string2,"%d %c %f %s",a,ch,num,name);
    printf("%s\n",string2);
}
