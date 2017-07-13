#include "double_literal.hpp"
#include <string>
#include <iostream>
#include <sstream>

double	getdouble()
{
	return (static_cast<double> *(this->val))
}

std::string	double_literal::getval()
{
	std::stringstream	ret;
	int					i;
	
	if (this->val == NULL)
	{
		ret << "Null Value";
		return (ret.str());
	}
	
	i = static_cast<int> this->getdouble();
	if ((static_cast <double> i) - this->getdouble() == 0.0)
		ret << "double: " << this->getdouble() << ".0";
	else
		ret << "double: " << this->getdouble();
	return (ret.str());
}

double_literal::double_literal(): val(NULL)
{
}

double_literal::double_literal(void *v): literal(v)
{
}

double_literal::double_literal(double_literal &l): val(l.val)
{
}

double_literal::~double_literal(){}

double_literal	&operator=(double_literal &l)
{
	this->val = l.val;
	return *this;
}