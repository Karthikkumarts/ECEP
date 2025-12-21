#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL;
    int *iptr=NULL;
    ptr=malloc(15);
    //store a char
    *((char *) ptr) = 'A';
    // store a short after char
    *(short *)((char *)ptr+1)=25;
    *(int *)((char *)ptr+3)=5000;
    *(double *)((char *)ptr+7)=2.5;
    printf("char val = %c\n",*(char *)ptr);
    printf("short val = %hd\n",*(short *)((char *)ptr+1));
    printf("int val = %d\n",*(int *)((char *)ptr+3));
    printf("double val = %lf\n",*(double *)((char *)ptr+7));
}

    
