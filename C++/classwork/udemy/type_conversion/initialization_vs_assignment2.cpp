//so best way is initialization instead of assignment
//member list initializer

#include<iostream>
#include"integer.hpp"

class product
{
	integer m_id;
	public: 
	//product(const integer & id)
	product(const integer & id) : m_id(id)
	{
		cout << "product(const intger &id )"<<endl;
		//m_id = id;
	}
	~product()
	{
		cout << "~product()"<<endl;
	}
};
int main()
{

	product p(2);
}
