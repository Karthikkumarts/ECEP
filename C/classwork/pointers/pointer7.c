#include<stdio.h>
int main()
{
    double d=2.5;
    char ch ='A';

    int *iptr;
    char *cptr;
    double *dptr;

    printf("sizeof *iptr= %lu\n",sizeof(*iptr));
    printf("sizeof *cptr= %lu\n",sizeof(*cptr));
    printf("sizeof *dptr= %lu\n",sizeof(*dptr));

    printf("sizeof int *= %lu\n",sizeof(int *));
    printf("sizeof char *= %lu\n",sizeof(char *));
    printf("sizeof double *= %lu\n",sizeof(double *));
    printf("sizeof cptr= %lu\n",sizeof(cptr));
;
cptr= &ch; //store address of char
dptr= &d;  //store address of double d
printf("*cptr=%c\n",*cptr);  //dereferring char pointer(fetch the char 1 byte)
printf("*dptr=%f\n",*dptr);  //dereferring char pointer(fetch the char 8 byte)
}
