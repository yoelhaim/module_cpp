/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:17:20 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/02 12:39:41 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat();
	~Bureaucrat();
	std::string getName();
	int getGrade();
	void increment();
	void decrement();
	class GradeTooHighException : public std::exception{
		public:
			const char * what() const exception;
	};
};

