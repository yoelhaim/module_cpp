/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/07 19:57:06 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form
{
private:
	bool _signed;
	const int SignedGrade;
	const int  executeGrade;
	const std::string name;
public:
	Form(const int SignedGrade = 0,const  int executeGrade = 0,const std::string name= "" );
	~Form();
	Form(const Form &t);
	Form &operator=(const Form &t);
	void beSigned(Bureaucrat &bureaucrat);
	// void signForm();
	void	setSigned(bool sign);
	
	// nested class
	class GradeTooHighException : public std::exception{
		public:
			const char * what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			const char * what() const throw();
	};
};
std::ostream &operator<<(std::ostream &output, Form const &form);

