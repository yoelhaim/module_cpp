/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:22 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/07 19:56:35 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const int SignedGrade,const  int executeGrade,const std::string name ):  SignedGrade(SignedGrade),executeGrade(executeGrade),name(name)
{
	std::count << "Form default constructor called !"<< std::endl;
	this->_signed = true;
}

Form::~Form()
{
}

// Form::Form(const Form &t){
// 	*this = t;
// }
// Form &Form::operator=(const Form &t){
// 	(void)t;
// 	return *this;
// }


void	Form::setSigned(bool sign)
{
	this->_signed = sign;
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->SignedGrade > bureaucrat.getGrade())
		setSigned(true);
	else
	{
		setSigned(false);
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

std::ostream &operator<<(std::ostream &output, Form const &form)
{
	(void) form;
	output << "jjjj"<< ", bureaucrat grade " << "sss"<< ".";
	return output;
}