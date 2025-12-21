#include<stdio.h>
int main()
{
    int a=5,b=10,c=0,d=-15;
    printf("%d\n",(a||((b&&c)&&d)||a));
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    return 0;
}
