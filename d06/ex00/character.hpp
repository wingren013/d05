#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	character: public literal
{
	public:		char	getchar();
				virtual std::string getval();
	
				character();
				character(void *val);
				character(character &c);
				virtual ~character();
				
				character &operator=(character &l);
};

#endif