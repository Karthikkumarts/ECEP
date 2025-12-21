#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("%zu\n",sizeof(arr));
    printf("%zu\n",sizeof(*arr));
}
