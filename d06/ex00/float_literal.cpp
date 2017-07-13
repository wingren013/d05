#include "float_literal.hpp"
#include <string>
#include <iostream>
#include <sstream>

float	getfloat()
{
	return (static_cast<float> *(this->val))
}

std::string	float_literal::getval()
{
	std::stringstream	ret;
	float 				f;
	int					i;
	
	if (this->val == NULL)
	{
		ret << "Null Value";
		return (ret.str());
	}
	
	f = this->getfloat();
	i = static_cast<int> f;
	if ((static_cast<float> i) - f == 0f)
		ret << "float: " << this->getfloat() << ".0f";
	else
		ret << "float: " << this->getfloat() << "f";
	return (ret.str());
}

float_literal::float_literal(): val(NULL)
{
}

float_literal::float_literal(void *v): literal(v)
{
}

float_literal::float_literal(float_literal &l): val(l.val)
{
}

float_literal::~float_literal(){}

float_literal	&operator=(float_literal &l)
{
	this->val = l.val;
	return *this;
}