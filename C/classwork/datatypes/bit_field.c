#include<stdio.h>
struct Nibble
{
    /*unsigned char lower : 4;//try out with signed datatype
    unsigned char upper : 4;*/

    unsigned  lower : 4;
    signed  upper : 4;
};

int main()
{
    struct Nibble nibble ;
    nibble.lower =0x0A;
    nibble.upper =0x0F;
    printf("%zu\n",sizeof(nibble));
    printf("%d\n",nibble.upper);
    printf("%d\n",nibble.lower);
}


