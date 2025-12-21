#include<stdio.h>
float avreage (int,int,int); //prototype
float avreage (int num1,int num2,int num3)
{ 
    int total=num1+num2+num3;
     float average=  total/3.0 ;
    return average;
}
int main ()
{
    float res;
    int a=10,b=10,c=10;
 res = avreage(a,b,c);
 printf("res=%f",res);
 return 0;
}
