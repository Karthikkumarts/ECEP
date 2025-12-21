#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int sum=0,largest,i;
   int max = arr[0]; 
    for(i = 0 ; i < 5 ;i++)
    {
	sum += arr[i];
	if(arr[i] > max)
	{
	    max = arr[i];
	}
    }
    printf("sum : %d\n",sum);
    printf("max : %d\n",max);



}

