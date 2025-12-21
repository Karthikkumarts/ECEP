#include<stdio.h>
union FloatBits
{
	float degree;
	struct
	{
		unsigned m : 23;
		unsigned e : 8;
		unsigned s : 1;
	} elements;
};
int main()
{
	union FloatBits fb = {2.5};
	printf("Sign: %X\n”", fb.elements.s);
	printf("Exponent: %X\n", fb.elements.e);
	printf("Mantissa: %X\n", fb.elements.m);
}
