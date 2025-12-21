#include<stdio.h>
union register_type
{
    int reg32;
    char byte[4];
};

int main()
{
    union register_type r;
    printf("sizeof(r)= %lu\n",sizeof(r));
    printf("%p %p %p\n",&r,&r.reg32,&r.byte);
    r.reg32 = 0x12345678;
    printf("r.reg32 = %x\n",r.reg32);
    printf("r.byte[0]= %x\n",r.byte[0]);
    r.byte[0]=0x99;
    printf("r.reg32 = %x\n",r.reg32);
    printf("r.byte[0]= %x\n",r.byte[0]); // as it is 0x99 -> in int 153 , as it is char it stores in 2's compliment -103 hence it is int while printing it will print as integer type
    return 0;
}


