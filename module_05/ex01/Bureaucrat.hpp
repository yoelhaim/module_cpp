/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:17:20 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/07 11:28:45 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &t);
	Bureaucrat &operator=(Bureaucrat const &t);
	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();
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
