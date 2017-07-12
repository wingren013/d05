#include "Bureaucrat.hpp"

#define E_GRADE_TOO_LOW throw(Bureaucrat::GradeTooLowException)
#define E_GRADE_TOO_HIGH throw(Bureaucrat::GradeTooHighException)

std::string	Bureaucrat::getname()
{
	return (this->name);
}

int			Bureaucrat::getgrade()
{
	return (this->grade);
}

void		Bureaucrat::demote()
{
	if (this->grade == 150)
		E_GRADE_TOO_LOW;
	this->grade += 1;
}

void		Bureaucrat::promote()
{
	if (this->grade == 1)
		E_GRADE_TOO_HIGH;
	this->grade -= 1;
}

bool		Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this)
		std::cout << this->name << " signs " << f.getname() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << this->name << " cannot sign " << f.getname() << " because " << e.msg() << std::endl;
	}
}

void		executeForm(Form const & form)
{
	try
	{
		form.execute();
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.msg() <<std::endl;
	}
}

Bureaucrat::Bureaucrat(): name("No Entry"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int g): name(name)
{
	if (g > 150)
		E_GRADE_TOO_LOW;
	else if (g < 1)
		E_GRADE_TOO_HIGH;
	this->grade = g;
}

Bureaucrat::Bureaucrat(Bureaucrat &b)
{
	*this = b;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &b)
{
	this->grade = b.grade;
	return *this;
}

const std::string Bureaucrat::GradeTooHighException::gradehigh const throw()
{
	return "Grade is too high";
}

const std::string Bureaucrat::GradeTooLowException::gradelow const throw()
{
	return "Grade is too low";
}

std::stringstream	Bureaucrat::operator<<(Bureaucrat &b)
{
	std::stringstream ss;
	
	ss << "name: " << b.name << " grade: " << b.grade;
	return (ss);
}