#include<stdio.h>
int main()
{
    printf("program \"%s\" ",__FILE__);
    printf("was compiled on %s at %s",__DATE__,__TIME__);
    printf("this print is from function : \"%s\"",__func__);
    printf("at line %d\n",__LINE__);
    return 0;
}
