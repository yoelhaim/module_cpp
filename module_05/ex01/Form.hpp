/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/07 11:52:35 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Form
{
private:
	bool _signed;
	const int iSign;
	const int  eSign;
public:
	Form();
	~Form();
	Form(const Form &t);
	Form &operator=(const Form &t);
	void beSigned();
	void signForm();
	class GradeTooHighException : public std::exception{
		public:
			const char * what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			const char * what() const throw();
	};
};
std::ostream &operator<<(std::ostream& output , Form const &obj);

