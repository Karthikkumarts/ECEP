#include<stdio.h>
int main()
{
   short int num=15;
   long int num2=253;
   long long int num3=2;
	printf("the size of short int %zu\n",sizeof(num));
	printf("the size of long int %zu\n",sizeof(num2));
	printf("the size of long long %zu\n",sizeof(num3));
	printf("the size of %zu\n",sizeof 1); //cant use sizeof  //cant use sizeof int
	return 0;
}
