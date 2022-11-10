/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 22:30:12 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(72, 45, "RobotomyRequestForm")
{
	if (!target.empty())
		this->target = target;
	else
		throw NotValid();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &t) : Form(72, 45, "RobotomyRequestForm")
{
	*this = t;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &t)
{
	if (this != &t)
		this->target = t.target;
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void RobotomyRequestForm::action() const
{
	srand(time(0));
	if (rand() % 2 == 1)
		std::cout << this->getTarget() << " has been robotomized successfully " << std::endl;
	else
		std::cout << this->getTarget() << "  robotomized Feiled " << std::endl;
}
const char *RobotomyRequestForm::NotValid::what() const throw()
{
	return "can't empty target.";
}