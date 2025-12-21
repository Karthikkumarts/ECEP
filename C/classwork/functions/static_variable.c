#include<stdio.h>

/*void fun()
{
     static int count = 10;  //here 10 will be stored in data segment after its life it gets destroyed
    printf("%d\n",count);
    count++; //static will store here 11

   }
int main()
{
    fun();
    fun();
    fun();
    return 0;
}*/
// static variables are stored in data segment
// they are not part of stack value is retained access
// function calls


void fun( int count)
{
static int flag = 0;
if (flag == 0)
{
    printf("greeting from emertxe\n");
    flag = 1;
}
printf("you entered %d\n",count);
}


int main()
{
    fun(25);
    fun(50);
    fun(100);
return 0;
}

