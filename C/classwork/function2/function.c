#include<stdio.h>
int main(int argc,char **argv)
//int main(int argc,char *argv[])
{
/*    printf("%s\n",argv[0]);
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);*/


    puts("list of arguments");
    for(int i=0;i<argc;i++)
       {
       printf("%d : %s\n",i,argv[i]);
       }

   /*  int i=0;
       while(argv[i] != NULL)
       {
       printf("%d : %s\n",i,argv[i]);
       i++;
       }
       printf("no of counts = %d\n",argc);*/

    return 0;
}

