//## concantinate the two string
#include<stdio.h>
#define print(x) x##_val
#define PRINT(x,y)  x##y

int main()
{
int int1_val=15;
float float1_val=25;
printf("%d\n",print(int1)); // int1 ##_val---> int1_val
printf("%f\n",print(float1)); //float1 ##_val---> float_val

printf("%d\n",PRINT(2,3));
return 0;
}
