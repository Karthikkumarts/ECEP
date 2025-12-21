#include<stdio.h>
 void print(int* *ptr);
int main()
{
    int a[3]={10,20,30};
    int b[3]={40,50,60};
    int c[3]={70,80,90};
    int *ptr[3]={a,b,c};
  /*  ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;*/
    print(ptr);

}
void print(int* *ptr)
{
    for(int i=0;i<3;i++)
    {
	for(int j=0;j<3;j++)
	{
	   printf("%d ",ptr[i][j]);
	//    printf("%d ",*((ptr[i])+j));

	}
	printf("\n");
    }

}
