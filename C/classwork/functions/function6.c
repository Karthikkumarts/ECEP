#include<stdio.h>
void print(int num, char ch);

void  print(int num,char ch)
{
    for (int i=0;i<num;i++)
    {
	printf("%c",ch);
    }
    return ;
    printf("hello world");
}
int main()
{
    int num=5;
    char ch='A';
    print(num,ch);
    return 0;
}
