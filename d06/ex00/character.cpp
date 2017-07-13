#include "character.hpp"
#include <string>
#include <iostream>
#include <sstream>

char	getchar()
{
	return (static_cast<char> *(this->val))
}

std::string	character::getval()
{
	std::stringstream	ret;
	char				c;
	
	if (this->val == NULL)
	{
		ret << "Null Value";
		return (ret.str());
	}
		
	c = this->getchar();
	if (c > 31 && c < 127)
		ret << "char: '" << c << "'";
	else
		ret << "char: Non Displayable";
	return (ret.str());
}

character::character(): val(NULL)
{
}

character::character(void *v): literal(v)
{
}

character::character(character &l): val(l.val)
{
}

character::~character(){}

character	&operator=(character &l)
{
	this->val = l.val;
	return *this;
}