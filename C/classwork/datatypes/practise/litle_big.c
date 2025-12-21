#include<stdio.h>
union
{
	int num;
	char bytes[4];
}a;

int main()
{
	a.num = 0x12345678;
	a.bytes[0] == 0x78 ? printf("little endian \n") : printf("big endian \n");
}
