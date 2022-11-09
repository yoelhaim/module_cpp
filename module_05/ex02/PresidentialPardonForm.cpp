/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 19:19:29 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(25, 5, "PresidentialPardonForm")
{
	if (!target.empty())
		this->target = target;
	else
		throw NotValid();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &t) : Form(25, 5, "PresidentialPardonForm")
{
	*this = t;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &t)
{
	if (this != &t)
		this->target = t.target;
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void PresidentialPardonForm::addActon() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const char *PresidentialPardonForm::NotValid::what() const throw()
{
	return "can't empty target.";
}