#include<stdio.h>
int main()
{
    int iter=0;
    do
    {
	printf("looped %d times\n",iter);
	iter++;
    }
    while (iter < 10 );
    return 0;
}

