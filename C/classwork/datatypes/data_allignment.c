#include<stdio.h>
struct student 
{
    char ch;
    int num;
    char ch2;

  /* char ch;
    char ch2;
    int num;*/
    
   /* char ch;
    char ch2;
    double num;*/

   /* double num;
    char ch2[10];*/
/*int num;
float num2;
char ch2;
double num3;*/
/*    short num;
    short num2;
    short num3;*/

};
int main()
{
    struct student s1;
    printf("%zu\n",sizeof(struct student));
  //  printf("%lu\n",&s1.ch);
//    printf("%lu\n",&s1.ch2);
  //  printf("%lu\n",&s1.num);
 //   printf("%lu\n",&s1.num2);
 //   printf("%lu\n",&s1.num3);
}

