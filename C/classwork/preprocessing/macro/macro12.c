#include<stdio.h>
#include<stdio.h>
#define METHOD1
//#undef METHOD1 //undef


#define METHOD1 1

int main()
{
#if METHOD1 == 1

#endif
#if METHOD1 == 2
    return 0;
}

/*int main()
{

//#ifdef METHOD1
#ifndef METHOD1 //oberve n in middle of ifdef

    puts("hello world");
    #else
    printf("how are you");
#endif
    return 0;
}*/
