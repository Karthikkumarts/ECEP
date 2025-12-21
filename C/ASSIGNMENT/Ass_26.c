/*Documentation
Name : KARTHIK KUMAR TS
Date : 10/01/2022
Description : WAP to define a macro SIZEOF(x), without using sizeof operator
Sample execution : ./a.out
size of int: 4
size of char: 1
size of void: 1
size of float: 4
size of double: 8
size of long int: 8
size of short int: 2
size of long double: 16
size of unsigned int: 4
size of unsigned char: 1
size of long long int: 8

*/
#include<stdio.h>
#define SIZEOF(x)   ((char *)(x + 1) - (char *) (x))       //macro definition to find sizeof(data_types)
int main()
{
    int *a; 
    printf("size of int: %ld\n",SIZEOF(a));   //printing sizeof integer datatype

    char *b;
    printf("size of char: %ld\n",SIZEOF(b));   //printing sizeof char datatype

    void *c;
    printf("size of void: %ld\n",SIZEOF(c));     //printing sizeof void datatype

    float *d;
    printf("size of float: %ld\n",SIZEOF(d));    //printing sizeof float datatype

    double *e;
    printf("size of double: %ld\n",SIZEOF(e));   //printing sizeof double datatype

    long int *f;
    printf("size of long int: %ld\n",SIZEOF(f));   //printing sizeof long int datatype

    short int *g;
    printf("size of short int: %ld\n",SIZEOF(g));   //printing sizeof short int datatype

    long double *h;
    printf("size of long double: %ld\n",SIZEOF(h));   //printing sizeof long double datatype

    unsigned int *i;
    printf("size of unsigned int: %ld\n",SIZEOF(i));   //printing sizeof unsigned int datatype

    unsigned char *j;
    printf("size of unsigned char: %ld\n",SIZEOF(j));   //printing sizeof unsigned char datatype

    long long int *k;
    printf("size of long long int: %ld\n",SIZEOF(k));    //printing sizeof long long int datatype

    return 0;
}
