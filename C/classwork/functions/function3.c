#include<stdio.h> 
float fahrenheit (float);
float fahrenheit ( float  num1)
{
    float celcius= (5.0/9) *( num1 -32);
    return celcius;
}
int main ()
{
    float res;
    float a=98.7;
    res = fahrenheit (a);
    printf("%f\n",res);

    res = fahrenheit (10);
    printf("%f",res);
    return 0;
}


