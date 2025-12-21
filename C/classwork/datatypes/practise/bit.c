#include<stdio.h>
#define true 1
#define false 0
enum
{
    ONE,
    TWO,
    THREE
}state;

struct nibble
{
   unsigned int lower : 4;
   unsigned int upper : 4;
   unsigned int cond : 1;
};

struct nibble n;

int main()
{
n.cond =false;
    printf("%zu\n",sizeof(n));
    n.lower=15;
    printf("%d\n",n.lower);
    n.upper=12;
    printf("%d\n",n.upper);
    int state = ONE;
    printf("%d\n",n.cond);

   /* do
    {
	switch(state)
	{
	    case ONE:
		printf("entered ONE STATE\n");
		state = TWO;
		break;
	    case TWO:
		printf("entered TWO STATE\n");
		state = THREE;
		break;
	    default:
		break;

	}

    }while(state != THREE);*/

}
