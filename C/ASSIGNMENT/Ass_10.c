/*Documentation
Name            : KARTHIK KUMAR TS 
Date            : 11-11-2021
Description     : WAP to find which day of the year.
Sample Execution: ./a.out

Enter the value of Nth day : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The 9th day is Tuesday
Do you want to continue(y/Y): y
Enter the value of 'n' : 9
(Menu to be displayed)
Enter the option to set the first day : 3
The 9th day is Wednesday
Do you want to continue(y/Y): y
Enter the value of 'n' : 9
(Menu to be displayed)

Enter the option to set the first day : 8
Error : Invalid input first day should be > 0 and <= 7
Do you want to continue(y/Y): y
Enter the value of 'n' : 0
Error : Invalid Input, n value should be > 0 and <= 365
Do you want to continue(y/Y): y
Enter the value of 'n' : 366
Error : Invalid Input, n value should be > 0 and <= 365

*/

#include<stdio.h>
int main()
{
    int num, n, day, rem;           //declaring integer type variables
    char choice;                 //declaring character type variable

    do
    {

	printf("Enter the value of Nth day:");     
	scanf("%d",&num);             //to read the Nth day from user and stroing in 'num' variable
	printf("Choose first day:\n");
	printf(" 1.Sunday\n 2.Monday\n 3.Tuesday\n 4.Wednesday\n 5.Thursday\n 6.Friday\n 7.Saturday\n");
	printf("Enter the option to set the first day:");
	scanf("%d",&n);               //to read the starting day from the user and storing in 'n' variable

	if ( num > 0 && num <= 365 )    //to check the condition whether the entered day is in correct range  or not
	{
	    if ( n > 0 && n <= 7 )      //to check the  condition whether the entered starting day is in correct range or not
	    {
		rem = num % 7;         // to store the remainder value in 'rem' variable
		day = (n + rem) - 1;     //to find out the Nth day
		if ( day > 7 )                 //to check the day is greater than 7 or not
		{
		    day = day -7;         //if above condition satisfies then subtract a day from 7 and store the result in 'day'
		}}
	    else
	    {
		printf("Invalid input first day should be > 0 and <= 7\n");  //is prints when user enteres a day greater than 7
	    }}
	else
	{
	    printf("Invalid input ,num value should be > 0 and <= 365\n");  //it prints when user enteres aNth day greater than 365 
	}


	switch(day)        //switch case to find out Nth day 
	{
	    case 1:                                            //case to print if Nth day is Sunday
		printf("The %dth day is Sunday\n",num);
		break;
	    case 2:                                            //case to print if Nth day is Monday
		printf("The %dth day is Monday\n",num);
		break;
	    case 3:                                            //case to print if Nth day is Tuesday
		printf("The %dth day is Tuesday\n",num);
		break;
	    case 4:                                            //case to print if Nth day is Wednesday
		printf("The %dth day is Wednesday\n",num);
		break;
	    case 5:                                            //case to print if Nth day is Thursday
		printf("The %dth day is Thursday\n",num);
		break;
	    case 6:                                            //case to print if Nth day is Friday
		printf("The %dth day is Friday\n",num);
		break;
	    case 7:                                            //case to print if Nth day is Saturday
		printf("The %dth day is Saturday\n",num);
		break;
	}
	printf("\n");
	printf("Do you want to continue (y/Y):");             //to run the code continuously
	getchar();
	scanf("%c",&choice);                               //to read the coice from user and store in 'choice' variable
    }while (choice == 'y' || choice == 'Y');         //cheking choice is 'y' or 'Y' to continuous the code
    return 0;
}

