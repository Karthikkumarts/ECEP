#include<stdio.h>
int main()
{
    int x=0;
    while(x++ < 5)   //x++ here is post increment starts from 0 and ++x is pre increment
    {
	printf("x %d\n",x); //x++ can be used
	//x++; //can use ++x
    }

	printf("outside x %d\n",x);
	printf(" %d %d %d \n", ++x,x++,++x); //leads to undefined behaviour
	return 0;
}
