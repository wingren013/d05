#ifndef DOUBLE_LITERAL_HPP
# define DOUBLE_LITERAL_HPP

class	character: public literal
{
	public:		double	getdouble();
				virtual std::string getval();
	
				double_literal();
				double_literal(void *val);
				double_literal(double_literal &l);
				virtual ~double_literal();
				
				double_literal &operator=(double_literal &l);
};

#endif