#include<stdio.h>
int main()
{
    int age;
    char arr[10];
    char arr2[16];
    sscanf("i am 40 years old","%s %s %d",arr,arr2,&age);
    //	sscanf("i am 30 years old","%*s %*s %d",arr,arr2,&age);

    printf(" ok you are %d years old\n",age);
    return 0;
}
