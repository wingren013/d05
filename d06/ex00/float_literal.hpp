#ifndef FLOAT_LITERAL_HPP
# define FLOAT_LITERAL_HPP

class	character: public literal
{
	public:		float	getfloat();
				virtual std::string getval();
	
				float_literal();
				float_literal(void *val);
				float_literal(float_literal &l);
				virtual ~float_literal();
				
				float_literal &operator=(float_literal &l);
};

#endif