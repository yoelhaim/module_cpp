/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:18:41 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 16:57:06 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade > 150)
		throw GradeTooLowException();
	if (this->grade < 1)
		throw GradeTooHighException();
	if (name.empty())
		throw inValid();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &t)
{
	*this = t;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &t)
{

	if (this != &t)
	{
		this->grade = t.grade;
	}
	return (*this);
}
std::string Bureaucrat::getName() const
{
	return this->name;
}
int Bureaucrat::getGrade() const
{
	return this->grade;
}
void Bureaucrat::increment()
{
	if (this->grade == 1)
		throw GradeTooHighException();
	this->grade--;
}
void Bureaucrat::decrement()
{
	if (this->grade == 150)
		throw GradeTooLowException();
	this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception.");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception.");
}
const char *Bureaucrat::inValid::what() const throw()
{
	return ("can't empty name.");
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return output;
}