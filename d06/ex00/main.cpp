#include <iostream>
#include "float_literal.hpp"
#include "character.hpp"
#include "int_literal.hpp"
#include "double_literal.hpp"


int		main(void)
{
	//get string
	
	void	*val = literal::produceval(str);
	
	character		c(val);
	int_literal		i(val));
	float_literal	f(val);
	double_literl	d(val);
	
	std::cout << c.getval() << std::endl;
	std::cout << i.getval() <<std::endl;
	std::cout << f.val() << std::endl;
	std::cout << d.val() << std::endl;
}