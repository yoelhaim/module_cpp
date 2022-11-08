/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:18:41 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/07 23:58:54 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name , int grade):name(name),grade(grade)
{
		std::cout << "default constrauctor called !\n";
		if (this->grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (this->grade < 1)
			throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &t)
{
	std::cout << "copy constrauctor called !\n";
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
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}
void Bureaucrat::decrement()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
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

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return output;
}

void Bureaucrat::signForm(Form & form)
{

	 try
	 {
		  form.beSigned(*this);
	 }
	 catch(const std::exception& e)
	 {
		 std::cerr << e.what() << '\n';
	 }
	 
}