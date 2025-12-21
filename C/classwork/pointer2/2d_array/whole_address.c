#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=(int *)(&arr+1);
    printf("%d\n",*(ptr-1));
    printf("arr %u\n",arr);
    printf("arr+1 %u\n",arr + 1);
    printf("&arr+1 %u\n",&arr+1);
    printf("arr %u\n",&arr);
    printf("%zu\n",sizeof(&arr));
    printf("%zu\n",sizeof(*&arr));
}

