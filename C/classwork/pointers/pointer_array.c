#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr;
    int i;
    ptr=a;
    for (i=0;i<5;i++)
    {
//	printf("%d",ptr[i]);
    printf("%d\n",*ptr++);
//   printf("%d\n",*++ptr); will not work
//ptr++;
    // ptr=ptr+1;
}
printf("\n");
return 0;
}
