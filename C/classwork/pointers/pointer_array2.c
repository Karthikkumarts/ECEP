#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int *ptr=a;

    for (i=0;i<5;i++)
    {
	printf("%d\n",a[i]);  // no rule a[i],i[a]
	// printf("%d\n",*(a+i));
	// printf("%d\n",*(ptr+i));
	// printf("%d\n",i[a]);
	// printf("%d\n",*(ptr++));
	//  printf("%d\n",*(a++)); //  shouldnt use this
	// printf("%lu\n",&a[i]); //address of array

    }
    printf("\n");
    return 0;
}

