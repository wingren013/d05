#include "Form.hpp"

#include <iostream>
#include <stringstream>

void	Form::beSigned(Bureaucrat &b)
{
	if (this->grade_req <= b.getgrade())
		this->filled_out = true;
	else
		throw(Form::GradeTooLowException);
}

std::string	Form::getname()
{
	return (this->name);
}

bool	Form::isfilled()
{
	return (this->filled_out);
}

int		reqgrade()
{
	return (this->grade_req);
}

int		execgrade()
{
	return (this->grade_exec);
}

const std::string Form::GradeTooHighException::msg() throw()
{
	return "Grade too high";
}

const std::string Form::GradeTooLowException::msg() throw()
{
	return "Grade too low"
}

Form::Form(const std::string name, const int req, const int exec): name(name), filled_out(false), grade_req(req), grade_exec(exec)
{
}

Form:Form(Form &f)
{
	*this = f;
	this->name = f.name;
	this->grade_req = f.grade_req;
	this->grade_exec = f.grade_exec;
}

Form::~Form(){}

Form	&Form::operator=(Form &f)
{
	this->filled_out = f.filled_out;
}

std::stringstream	Form::operator<<(Form &f)
{
	stringstream	ss;
	
	ss << "name: " << f.name << " filled out: " << f.filled_out << " grade to sign: " << f.grade_req << " grade to execute: " << f.grade_exec;
	return (ss)
}
