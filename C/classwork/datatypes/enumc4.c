#include<stdio.h>
typedef enum
{
    red,
    green,
    blue
}colour;
int main()
{
    colour c;
    printf("%zu\n",sizeof(c));
    printf("%zu\n",sizeof(colour));

}
