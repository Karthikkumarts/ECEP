/*Documentation
Name            :KARTHIK KUMAR TS
Date            :5/12/2021
Description     :WAP to implement below mentioned bitwise functions
Sample execution:
Select bit operation from below list
1.get_nbits
2.repalce_nbits 
3.get_nbits_from_pos
4.replace_nbits_from_pos
5.toggle_bits_from_pos
6.print_bits
Enter your choice: 3
Enter num: 12
Enter pos: 5
Enter n: 3
Binary format for 12--> 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 
3 bits from 5 pos--> 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 
Value at 12[5(pos):3(bits)]-> 1

Do you want to continue: n

 */

#include<stdio.h>
int get_nbits(int , int ); //prototype
int replace_nbits(int , int , int ); //prototype
int get_nbits_from_pos(int ,int ,int ); //prototype
int toggle_nbits_from_pos(int ,int ,int ); //prototype
int replace_nbits_from_pos(int ,int ,int ,int ); //prototyype
int print_bits(int num, int n); //prototype
int main()
{
    char ch;
    do
    {
	int choice,num,n,value,pos,y;
	printf("Select bit operation from below list\n");
	printf(" 1.get_nbits\n 2.repalce_nbits \n 3.get_nbits_from_pos\n 4.replace_nbits_from_pos\n 5.toggle_bits_from_pos\n 6.print_bits\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
		printf("Enter num: "); 
		scanf("%d",&num); //read the number
		printf("Enter n: ");
		scanf("%d",&n); //read the number for returning the corresponding decimal value
		printf("Binary format for %d--> ",num);
		for ( int i = 31; i >= 0; i--)
		{
		    num & 1 << i ? printf("1 ") : printf("0 "); //printing the binary of the entered number
		}
		printf("\n%d bits from LSB --> ",n);
		y = get_nbits(num,n); //calling the function
		for (int i = 31; i >= 0; i-- )
		{
		    y & 1 << i ? printf("1 ") :printf("0 ") ;
		}
		 printf("\nValue at %d after getting %d bits-> ",num,n); //printing the corresponding decimal value of that number from lsb
		printf("%d\n", y);
		break;
	    case 2: 
		printf("Enter num: "); 
		scanf("%d",&num); //read the number
		printf("Enter value: ");
		scanf("%d",&value); //read the value
		printf("Enter n: "); 
		scanf("%d",&n); //read n
		printf("Binary format for %d--> ",num);
		for ( int i = 31; i >= 0; i-- )
		{ 
		    num & 1 << i ? printf("1 ") : printf("0 "); //printing the entered number in binary format
		}
		printf("\nreplace %dbits from %d value--> ",n,value);
		y = replace_nbits(num,value,n); //calling the function
		for (int i = 31; i >= 0; i-- ) 
		{
		    y & 1 << i ? printf("1 ") :printf("0 ") ;
		}
		printf("\nValue at %d[%d(value):%d(bits)]: ",num,value,n);
		printf("%d\n", y); //printing the replaced bit of the num
		break;
	    case 3: 
		printf("Enter num: ");
		scanf("%d",&num); //read num 
		printf("Enter pos: ");
		scanf("%d",&pos); //read the position
		printf("Enter n: ");
		scanf("%d",&n); //read n
		if ( pos > n )
		{
		    printf("Binary format for %d--> ",num);
		    for ( int i = 31; i >= 0; i-- )
		    {
			num & 1 << i ? printf("1 ") : printf("0 "); //printing the enetred number into binary format
		    }
		    printf("\n%d bits from %d pos--> ",n,pos);
		    y = get_nbits_from_pos(num,pos,n); //calling the function
		    for (int i = 31; i >= 0; i-- )
		    {
			y & 1 << i ? printf("1 ") :printf("0 ") ;
		    }
		    printf("\nValue at %d[%d(pos):%d(bits)-> ",num, pos, n);
		    printf("%d\n", y); //fetching n number of bits from given position
		}
		else
		{
		    printf("Position should be greater than 'n'\n");
		}
		break;
	    case 4: 
		printf("Enter num: ");
		scanf("%d",&num); //read num
		printf("Enter value: ");
		scanf("%d",&value); //read value
		printf("Enter n: ");
		scanf("%d",&n); //read n
		printf("Enter pos: ");
		scanf("%d",&pos); //read position
		if ( pos > n )
		{
		    printf("Binary format for %d--> ",num);
		    for ( int i = 31; i >= 0; i-- ) 
		    {
			num & 1 << i ? printf("1 ") : printf("0 ");
		    }
		    printf("\nreplace %dbits from %d value--> ",n,value);
		    y = replace_nbits_from_pos(num,value,n,pos); //calling the function
		    for (int i = 31; i >= 0; i-- )
		    {
			y & 1 << i ? printf("1 ") :printf("0 ") ;
		    }
		    printf("\nValue at %d[%d(n):%d(pos)]: ",value, n, pos);
		    printf("%d\n", y); //printing the number i,e replaced bits from position 
		}
		else
		{
		    printf("Position should be greater than 'n'\n");
		}
		break;
	    case 5: 
		printf("Enter num: ");
		scanf("%d",&num); //read num
		printf("Enter pos: ");
		scanf("%d",&pos); //read position
		printf("Enter n: ");
		scanf("%d",&n); //read n 
		if ( pos > n )
		{
		    printf("Binary format for %d--> ",num);
		    for ( int i = 31; i >= 0; i-- )
		    {
			num & 1 << i ? printf("1 ") : printf("0 "); //printing the number into binary format
		    }
		    printf("\n%d bits from %d pos--> ",n,pos);
		    y = toggle_nbits_from_pos(num,pos,n); //calling the function
		    for (int i = 31; i >= 0; i-- )
		    {
			y & 1 << i ? printf("1 ") :printf("0 ") ;
		    }
		    printf("\nValue at %d[%d(pos):%d(n)]-> ",num, pos, n);
		    printf("%d\n", y); //printing  the number i,e toggled bit from position
		}
		else
		{
		    printf("Position should be greater than 'n'\n");
		}
		break;
	    case 6: 
		printf("Enter num: ");
		scanf("%d",&num); //read num
		printf("Enter n: ");
		scanf("%d",&n); //read n
		printf("\nlast %d bits is: ", n);
		print_bits(num,n); //calling the function
		break;
	    default:
		printf("Enter correct choice");
		break;
	}
	printf("\nDo you want to continue: ");
	scanf("\n%c",&ch);
    }while ( ch == 'y' | ch == 'Y');
}

int get_nbits(int num, int n)  //function defination
{
    int y;
    return y = ( num & ~(-1 << n)); 
}

int replace_nbits(int num,int value,int n) //function defination
{
    int y;
    return y = (num & (-1 << n)) | (value & ~(-1 << n));
}

int get_nbits_from_pos(int num,int pos,int n) //function defination
{
    int mask,y,j;
    j = pos - n + 1;
    mask = ~(-1 << n) << j;
    return y = ( num & mask ) >> j;
}

int toggle_nbits_from_pos(int num,int pos,int n) //function defination
{
    int mask,y,j;
    j = pos - n + 1;
    mask = ~(-1 << n) << j;
    return y =  num ^ mask ;
}
int replace_nbits_from_pos(int num,int value,int n,int pos) //function defination
{
    int y,mask,j,result,mask1;
    j = pos - n + 1;
    mask1 = value & ~(-1 << n);
    mask = ~(-1 << n) << j; 
    return y = (num & mask) & (mask1 << j);
}

int print_bits(int num, int n) //function defination
{
    for (int i = n-1; i >= 0; i-- )
    {
	(num & ( 1 << i )) ? printf("1 ") :printf("0 ") ;
    }
    printf("\n");
}    
