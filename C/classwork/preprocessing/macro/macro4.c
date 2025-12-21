#include<stdio.h>
#define sum(x,y) ((x)+(y))
#define sub(x,y) ((x)-(y))
int main()
{
    int a=5,b=10,ret3,ret;
    float val1=2.5f,val2=3.0f,ret2;

    //macro are not type specific
    ret=sum(a,b);
    ret3=sub(a,b);
    ret2=sum(val1,val2);
    printf("ret = %d\n",ret);
    printf("ret3 = %d\n",ret3);
    printf("ret2 = %f\n",ret2);
    return 0;
}
