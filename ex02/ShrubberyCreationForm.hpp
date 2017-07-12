#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
	public:		void action();
				
				ShrubberyCreationForm(std::string filename = "Shrubbery");
				ShrubberyCreationForm(ShrubberyCreationForm &f);
				virtual ~ShrubberyCreationForm();
				
				ShrubberyCreationForm	&operator=(ShrubberyCreationForm &f);
	
	private:	std::string target;
}

#endif