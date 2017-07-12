#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include "Form.hpp"

class	Bureaucrat
{
	public: std::string getname();
			int			getgrade();
			void		demote();
			void		promote();
			
			Bureaucrat();
			Bureaucrat(std::string name, int grade);
			Bureaucrat(Bureaucrat &b);
			virtual ~Bureaucrat();
			
			Bureacrat	&operator=(Bureaucrat &b);
			std::string operator<<(Bureaucrat &b);
			std::string operator>>(Bureaucrat &b);
			
			class	GradeTooLowException: public std::exception
			{
				public: virtual const std::string gradelow() const;
			};
			
			class	GradeTooHighException: public std::exception
			{
				public: virtual const std::string gradehigh() const;
			};
			
	protected:	const std::string	name();
				int					grade;
				
};

#endif