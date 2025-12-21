#include<stdio.h>
#define SIZE 1024
#define MSG "enter a string:"
int main()
{
    char array[SIZE];
    printf("%s",MSG);
    fgets(array,SIZE,stdin);
    printf("%s",array);
    return 0;
}
