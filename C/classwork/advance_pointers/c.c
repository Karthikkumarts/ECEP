#include<stdio.h>
int main(){
    int *ptr=NULL;
    int x=10;
    ptr = &x;
    printf("%d %d\n",ptr,&x);
    printf("%d %d\n",*ptr,x);
}
