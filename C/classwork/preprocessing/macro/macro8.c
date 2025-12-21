#include<stdio.h>
#define square(x) ((x)*(x))
#define ad(x) (x*x)
int main()
{
    int a=2,b=3,res,ad;
    res=square(a+b);
    printf("res = %d\n",res); //with brackets
    res=ad(a+b);
    printf("ad= %d\n",res); //without brackets
}

