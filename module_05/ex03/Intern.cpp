/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:00:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 19:22:30 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &t)
{
	(void)t;
}
Intern &Intern::operator=(Intern const &t)
{
	(void)t;
	return *this;
}

const char *Intern::NotExist::what() const throw()
{
	return ("error create The Form.");
}
static void printMessage(std::string name)
{
	std::cout << "Intern create " << name << std::endl;
}
Form *Intern::makeForm(std::string nameForm, std::string target)
{
	std::string FormObj[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};
	int i = -1;
	while (++i < 3)
	{
		if (nameForm == FormObj[i])
		{
			switch (i)
			{
			case 0:
				printMessage(FormObj[i]);
				return new ShrubberyCreationForm(target);

			case 1:
				printMessage(FormObj[i]);
				return new RobotomyRequestForm(target);
			case 2:
				printMessage(FormObj[i]);
				return new PresidentialPardonForm(target);
			}
		}
	}

	throw Intern::NotExist();
	return NULL;
}