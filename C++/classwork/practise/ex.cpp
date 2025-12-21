#include<iostream>
using namespace std;
template <size_t N>
void fun(int (&arr)[N])  // reference to array of N ints
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << ' ';
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	fun(arr);
}
