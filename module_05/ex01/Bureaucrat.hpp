/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:17:20 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/07 23:50:24 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
class Bureaucrat;
#include <iostream>
#include <exception>
#include "Form.hpp"
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat(std::string name = "", int  grade = 0);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &t);
	Bureaucrat &operator=(Bureaucrat const &t);
	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	void signForm(Form &form);
	// setter
	void setGrade(int grade);
	class GradeTooHighException : public std::exception{
		public:
			const char * what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			const char * what() const throw();
	};
};

std::ostream &operator<<(std::ostream& output , Bureaucrat const &obj);
