#ifndef INT_LITERAL_HPP
# define INT_LITERAL_HPP

class	character: public literal
{
	public:		int	getint();
				virtual std::string getval();
	
				int_literal();
				int_literal(void *val);
				int_literal(int_literal &l);
				virtual ~int_literal();
				
				int_literal &operator=(int_literal &l);
};

#endif