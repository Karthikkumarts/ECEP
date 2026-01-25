#include<iostream>
#include"rule_of_5.hpp"
using namespace std;
class number
{
	shallow m_value;
	public:
	number(int value = 0) : m_value(value) {}
	number(number &&val) = default;
	number & operator=(number &&val) = default;
	number & operator=(const number &val) = default;
};

int main()
{
	/*number n1{1};
	number n2{2};
	n2 = n1;
//	n1 =6;*/

	shallow n;
	n = 5;


}

