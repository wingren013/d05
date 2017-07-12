#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm: public Form
{
	public:		void action();
	
				PresidentialPardonForm(std::string filename = "Shrubbery");
				PresidentialPardonForm(PresidentialPardonForm &f);
				virtual ~PresidentialPardonForm();
				
				PresidentialPardonForm	&operator=(PresidentialPardonForm &f);
	
	private:	std::string target;
}

#endif