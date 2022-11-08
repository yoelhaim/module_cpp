/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:22 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/08 20:46:41 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const int SignedGrade, const int executeGrade, const std::string name) : SignedGrade(SignedGrade), executeGrade(executeGrade), name(name)
{
	if (this->SignedGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->SignedGrade > 150)
		throw Form::GradeTooLowException();
	if (this->executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->executeGrade > 150)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

Form::~Form()
{
}

Form::Form(const Form &t) : SignedGrade(t.getSignedGrade()), executeGrade(t.getExecuteGrade()), name(t.getNameForm())
{
	*this = t;
}
Form &Form::operator=(const Form &t)
{
	if (this != &t)
		this->_signed = t.getSigned();
	return *this;
}

void Form::setSigned(bool sign)
{
	this->_signed = sign;
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->SignedGrade >= bureaucrat.getGrade())
		setSigned(true);
	else
	{
		setSigned(false);
		throw Form::GradeTooHighException();
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception.");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception.");
}

std::string Form::getNameForm() const
{
	return (this->name);
}
bool Form::getSigned() const
{
	return (this->_signed);
}
int Form::getSignedGrade() const
{
	return this->SignedGrade;
}
int Form::getExecuteGrade() const
{
	return this->executeGrade;
}

void Form::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned() || this->executeGrade < executor.getGrade())
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
	(void)form;
	output << form.getNameForm() << ", bureaucrat grade "
		   << "ss"
		   << ".";
	return output;
}