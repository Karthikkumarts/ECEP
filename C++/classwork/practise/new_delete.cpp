#include<iostream>
using namespace std;
void new_int()
{
	int * a = new int{5};
	cout << "a : " << *a << endl;
	delete a;
	a = nullptr;
}

void new_char()
{
	char * str = new char[20] {"karthik"};
	cout << "str : " << str<<endl;
	delete str;
	str = nullptr;
}

void new_2d()
{
	int row ,col;
	cout << " enter the row and col size : ";
	cin >> row >> col;

	int **ptr = new int*[row];

	for(int i = 0 ; i < row ; i++)
	{
		ptr[i] = new int[col];
	}

	cout << "enter the array : ";
	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < col ; j++)
		{
			cin >> ptr[i][j];
		}
	}
	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < col ; j++)
		{
			cout << ptr[i][j] << ' ';
		}
		cout << endl;
	}
	delete[] ptr;
}

void int_arr()
{
	int *a = new int[5]{1,2,3,4,5};
	for(int i = 0 ; i < 5 ; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

}
int main()
{
	new_int();
	new_char();
	int_arr();
	new_2d();
}
