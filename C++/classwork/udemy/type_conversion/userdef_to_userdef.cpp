#include<iostream>
#include"integer.hpp"
class product
{
	integer m_id;
	public:
	product(const integer &id) : m_id(id){}
	~product(){}
	const integer & getinteger() const
	{
		return m_id;
	}
	operator integer()
	{
		return m_id;
	}
	
};
int main()
{
	product p{5};
	//integer id = p.getinteger();
	integer id;
	id = p;
}
