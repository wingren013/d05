#ifndef LITERAL_HPP
# define LITERAL_HPP

class	literal
{
	public:		virtual std::string getval();
	
				literal(void *v = 0);
				literal(void *val);
				literal(std::string str);
				literal(literal &l);
				virtual ~literal();
				
				literal	&operator=(literal &l);
				
				static void	*produceval(std::string str);
	
	protected:	void	*val;
};

#endif