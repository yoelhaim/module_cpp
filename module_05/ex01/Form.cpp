/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:22 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/10 01:32:21 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const int SignedGrade, const int executeGrade, const std::string name) : SignedGrade(SignedGrade), executeGrade(executeGrade), name(name)
{
	if (this->SignedGrade < 1)
		throw GradeTooHighException("Grade Too High Exception.");
	if (this->SignedGrade > 150)
		throw GradeTooLowException();
	if (this->executeGrade < 1)
		throw GradeTooHighException("Grade Too high Exception.");
	if (this->executeGrade > 150)
		throw GradeTooLowException();
	this->_signed = false;
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
	std::string s = bureaucrat.getName() + " couldn’t sign " + getNameForm() + " because he has not permission.";
	char *str = &s[0];
	if (bureaucrat.getGrade() <= this->SignedGrade)
		setSigned(true);
	else
		throw GradeTooHighException(str);
}

Form::GradeTooHighException::GradeTooHighException(const char *msg) : msg(msg)
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (this->msg);
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception.");
}

std::string Form::getNameForm() const
{
	return (this->name);
}
int Form::getSigned() const
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

std::ostream &operator<<(std::ostream &output, Form const &form)
{
	output << "name " << form.getNameForm() << ", signed is " << (form.getSigned() ? "yes" : "NO") << ", SignedGrade " << form.getSignedGrade() << ", executeGrade " << form.getExecuteGrade();
	return output;
}