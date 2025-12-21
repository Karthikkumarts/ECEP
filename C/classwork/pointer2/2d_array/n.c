#include<stdio.h>
void fun(int a, int b , int (*p)[3])
{
    for(int i = 0 ; i < a ;i++)
    {
	for(int j = 0 ; j < b ; j++)
	{
	    printf("%d ",p[i][j]);
	}
    }
}
int main()
{
    int a[2][3]={10,20,30,40,50,60};
    int (*ptr)[3]=a;
fun(2,3,ptr);

}
