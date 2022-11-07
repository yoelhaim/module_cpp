/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:22 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/07 12:00:49 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): iSign(1), eSign(3)
{
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

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception.");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception.");
}

// std::ostream &operator<<(std::ostream &output, Form const &obj)
// {
// 	// output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
// 	return output;
// }