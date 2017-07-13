#include "int_literal.hpp"
#include <string>
#include <iostream>
#include <sstream>

int	getint()
{
	return (static_cast<int> *(this->val))
}

std::string	int_literal::getval()
{
	std::stringstream	ret;
	
	if (this->val == NULL)
	{
		ret << "Null Value";
		return (ret.str());
	}
	
	ret << this->getint();
	return (ret.str());
}

int_literal::int_literal(): val(0)
{
}

int_literal::int_literal(void *v): literal(v)
{
}

int_literal::int_literal(int_literal &l): val(l.val)
{
}

int_literal::~int_literal(){}

int_literal	&operator=(int_literal &l)
{
	this->val = l.val;
	return *this;
}