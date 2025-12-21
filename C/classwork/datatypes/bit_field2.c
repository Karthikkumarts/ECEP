#include<stdio.h>
struct Nibble
{

    /*char  lower : 4;
    char  upper : 4;*/
    //char  upper : 12; //error we cant give this,becaause of size of bit is 8

    char lower :4;
    char upper :6;

};

int main()
{
    struct Nibble nibble ;
    nibble.upper =0x0A;
    nibble.lower =0x02;
    printf("%zu\n",sizeof(nibble));
    printf("%d\n",nibble.upper);
}


