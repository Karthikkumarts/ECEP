#include<stdio.h>
int main()
{
    char *str1="hello";
    char *str2="hello";
    printf("%p %p\n",str1,str2);

    if(str1==str2)
    {
	printf("hoo,they share same space");
    }
    else
    {
	printf("no.they at=re in different space");
}
return 0;
}
