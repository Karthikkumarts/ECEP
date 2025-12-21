#include<stdio.h>
int main()
{
    int x=5,y=2;
    float z,p;
    z =(float) x / y; //here int/int result will be int but we need float so add (float)
    p=5.0/2;
    printf(" %f %lf\n",z,p);
    return 0;
}


