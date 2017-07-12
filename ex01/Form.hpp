#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class	Form
{
	public:		void		beSigned(Bureaucrat &b);
				std::string	getname();
				bool		isfilled();
				int			reqgrade();
				int			execgrade();
				
				Form(const std::string name = "Form", const int req = 1, const int exec = 1);
				Form(Form &f);
				virtual ~Form();
				
				Form				&operator=(Form &f);
				std::stringstream	operator<<(Form &f);
				
				class GradeTooHighException: public std::exception
				{
					public: virtual const std::string msg() const;
				};
				
				class GradeTooLowException: public std::exception
				{
					public: virtual const std::string msg() const;
				};
	
	private:	const std::string	name;
				bool				filled_out;
				const int			grade_req;
				const int			grade_exec;
			
};
#endif