#include<stdio.h>
union e
{
    unsigned int val;
    unsigned char va[4];
};
int main()
{
    union e s;
    s.val=0x12345678;
    s.va[0] == 0x78?printf("liite"):printf("big");
}
