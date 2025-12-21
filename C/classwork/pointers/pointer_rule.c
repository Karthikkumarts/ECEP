#include<stdio.h>
int main()   //program to show the accessing of value from invalid adress which gives the runtime error|segmentation error|
{
    /*   int x=10;
	 int *ptr1;
	 printf("%d\n",x);
	 printf("%d\n",*ptr1);*/



/*    int number=10;     //rule 2
    int *ptr=&number;
    *ptr=100;  //see the difference
    printf("number contains %d\n",number);
    printf("address of &num  %d\n",&number);
    printf("number contains in ptr %d\n",*ptr);
    printf("number contains %d\n",number);    */


        int x=10;  //rule 5
	  int *iptr=&x;
	  char y=8;
	  char *cptr=&y;
	  double z=5; 
	  double *dptr=&z;
	  printf("ptr = %lu \n",iptr);
	  printf("ptr + 1 =%lu\n",iptr+1);
	  printf("ptr2 = %lu \n",cptr);
	  printf("ptr2 + 1 = %lu \n",cptr + 1);
	  printf("ptr3 = %lu \n",dptr );
	  printf("ptr3 + 1 = %lu \n",dptr + 1);

}

