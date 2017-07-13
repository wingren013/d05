#include "literal.hpp"
#include <iostream>
#include <cstdlib>

std::string	literal::getval()
{
	std::cout << val;
}

literal::literal(void *v): val(v)
{
}

literal::literal(std::string str): val(NULL), stringval(str)
{
	//convert str to val
	this->val = produceval(str);
}

literal::literal(literal &l): val(l.val), stringval(l.stringval)
{
}

literal::~literal(){}

literal	&operator=(literal &l)
{
	this->val = l.val;
	this->stringval = l.stringval;
	return *this;
}

void	*literal::produceval(std::string str)
{
	//double	d = std::atof(str.c_str);
	double		d = std::strtod(str.c_str, NULL)
	double		*ret = NULL;
	
	ret = new double;
	*ret = d;
	
	return (ret)
}