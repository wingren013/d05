#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string filename): Form("Shrubbery Creation Form", 145, 137), target(filename)
{	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &f)
{
	*this = f;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm &f)
{
	this->target = f.target;
}