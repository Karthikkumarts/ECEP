/*Documentation
Name 	    : KARTHIK KUMAR TS
Date 	    : 10-12-2021
Description : WAP implement the solution for tower of hanoi
Sample execution : ./a.out
Enter the number of disks: 3

make the legal move from rod A to C
make the legal move from rod A to B
make the legal move from rod C to B
make the legal move from rod A to C
make the legal move from rod B to A
make the legal move from rod B to C
make the legal move from rod A to C
Do you want to continue(y/Y): y
Enter the number of disks: -7
Enter only positive values

Do you want to continue(y/Y): n

 */
#include<stdio.h>
void tower_hanoi(int disk, char source, char dest, char temp) //function defination
{
    if (disk == 1)   //If disk equal to 1
    {
	printf("\nmake the legal move from rod %c to %c", source, dest);
	return;
    }
    tower_hanoi(disk - 1, source, temp, dest);    //Calling the recursive function by swaping dest and temp
    printf("\nmake the legal move from rod %c to %c",source, dest);
    tower_hanoi(disk - 1, temp, dest, source);    //Calling recursive function by swaping source and temp
}

int main()
{
    char ch;     //Declaring local variables;
    int num;
    do
    {
	printf("Enter the number of disks: ");   
	scanf("%d", &num);              //reading number of disks from user and stroing in 'num'
	if (num > 0)            //checking -ve numbers
	    tower_hanoi(num, 'A', 'C', 'B');	//Calling function
	else
	    printf("Enter only positive values\n");
	printf("\n");
	printf("Do you want to continue(y/Y): ");       //to continues the loop
	scanf("\n%c", &ch);               //reading character from user 
    }while (ch == 'y' || ch == 'Y');    //checking character 
    return 0;
}
