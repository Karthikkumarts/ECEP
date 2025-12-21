#include<iostream>
//#define square(x) x*x


class stu{
	public:
		int square(int x);
};

inline int stu::square(int x)
{
	return x*x;
}

int main()
{
	stu s;
	int res = s.square(5+1);
	printf("res : %d \n",res);
}
