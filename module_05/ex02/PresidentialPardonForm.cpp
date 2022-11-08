/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:00 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/08 20:48:26 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(25, 5, "PresidentialPardonForm")
{
	this->target = "PresidentialPardonForm";
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
