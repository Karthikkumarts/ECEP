#include<stdio.h>
int main()
{
    int N,starting_day,mod,sum;
    char ch;
    do
    {
	printf("enter the N:");
	scanf("%d",&N);
	if (N > 0)
	{
	    if ( N >= 1 &&  N <= 365)
	    { 
		printf("1:sunday\n");
		printf("2:monday\n");
		printf("3:tuesday\n");
		printf("4:wednesday\n");
		printf("5:thursday\n");
		printf("6:friday\n");
		printf("7:saturday\n");
		printf("\n");
		printf("enter starting day:");
		scanf("%d",&starting_day);
		if ( starting_day >=1 && starting_day <=7)
		{
		    if (N < 7)
		    {
			mod=N;
		    }
		    else
			mod=(N%7);
		    if(mod == 0,1,2,3,4,5,6)
			sum=mod+starting_day;
		    switch (sum)
		    {
			case 1:
			    printf("the %dth day is sunday\n",N);
			    break;
			case 2 :
			    printf("the %dth  day is monday\n",N);
			    break;
			case 3 :
			    printf("the %dth day is tuesday\n",N);
			    break;
			case 4 :
			    printf("the %dth day is wednesday\n",N);
			    break;
			case 5 :
			    printf("the %dth day is thursday\n",N);
			    break;
			case 6:
			    printf("the %dth day is friday\n",N);
			    break;
			case 7:
			    printf("the %dth day is saturday\n",N);
			    break;
			default:
			    printf("try again\n");
		    }
		}
		else
		    printf(" Invalid input first day should be > 0 and <= 7\n");
	    }
	    else  
		printf("enter the N less than 365\n");
	}
	else
	    printf("enter only positive numbers\n");

	printf("do you want to continue ? press (y/Y):");
	getchar();
	scanf("%c",&ch);
    }
    while (ch =='y' || ch == 'Y');
    return 0;
}


