/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:59:17 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 14:30:54 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern
{
private:
public:
	Intern();
	~Intern();
	Intern(Intern const &t);
	Intern &operator=(Intern const &t);
	Form *makeForm(std::string nameForm, std::string target);
	class NotExist : public std::exception
	{
	public:
		const char *what() const throw();
	};
};
