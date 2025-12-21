#include<stdio.h>
void swap(void *ptr1,void *ptr2,int size);
int main()
{
    int num1=5.6,num2=6.2; //use float and double
    printf("before swapping %d,%d\n",num1,num2);
    //printf("before swapping %f,%f\n",num1,num2);
    swap(&num1,&num2,sizeof(num1));
   // printf("after swapping %f,%f\n",num1,num2);
    printf("after swapping %d,%d\n",num1,num2);
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    swap(a,b,sizeof(a));
    printf("%d %d %d\n",a[0],a[1],a[2]);
    printf("%d %d %d\n",b[0],b[1],b[2]);

}
void swap(void *ptr1,void *ptr2,int size)
{
    char temp;
    for(int i=0;i<size;i++)
    {
	temp  = *(char * )ptr1;
	*((char *)ptr1)=*((char *)ptr2);
	*(char *)ptr2=temp;
	ptr1++;
	ptr2++;
    }
}
