#include<stdio.h>
#include<stdlib.h>
void my_exit(void)
{
    printf("exiting program");
}
int main()
{
    printf("hello\n");
    //registration my_exit function,my_exit get called just before program termination
    atexit(my_exit);
    puts("before exit");
    return 0;
}
