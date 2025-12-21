/*Documentation
Name : KARTHIK KUMAR TS
Date : 2/11/21
Description : WAP to check size of basic data types
Sample i/p : NONE
Sample o/p :Size of int: 4 bytes
	   Size of char:1 bytes
	   Size of float:4 bytes
	   Size of double:8 bytes
	   Size of unsigned int:4 bytes
	   Size of long int:8 bytes
Documentation*/

#include<stdio.h>
int main()
{
    printf("the size of int\t\t\t:%zu bytes\n", sizeof(int)); //size of int, signed int 
    printf("the size of char\t\t:%zu bytes\n", sizeof(char)); //size of char
    printf("the size of float\t\t:%zu bytes\n",sizeof(float)); // size of float
    printf("the size of double\t\t:%zu bytes\n",sizeof(double)); // size of double
    printf("the size of void\t\t:%zu bytes\n",sizeof(void)); // size of void
    printf("the size of short int\t\t:%zu bytes\n",sizeof(short int)); // size of short int
    printf("the size of unsigned short int\t:%zu bytes\n",sizeof(unsigned short int)); // size of unsigned short int
    printf("the size of long int\t\t:%zu bytes\n",sizeof(long int)); // size of long int
    printf("the size of long long int\t:%zu bytes\n",sizeof(long long int)); // size of long long int
    printf("the size of long double\t\t:%zubytes\n",sizeof(long double)); // size of longe double
    printf("the size of unsigned int\t:%zu bytes\n",sizeof(unsigned int)); // size of unsigned int
    printf("the size of unsigned char\t:%zu bytes\n",sizeof(unsigned char)); // size of unsigned char
    return 0;
}
