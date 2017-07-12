#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm: public Form
{
	public:		void action();
	
				RobotomyRequestForm(std::string filename = "Shrubbery");
				RobotomyRequestForm(ShrubberyCreationForm &f);
				virtual ~RobotomyRequestForm();
				
				RobotomyRequestForm	&operator=(RobotomyRequestForm &f);
	
	private:	std::string target;
}

#endif