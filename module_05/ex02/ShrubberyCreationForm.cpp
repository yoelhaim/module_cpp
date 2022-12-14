/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:29:25 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/10 16:46:29 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(145, 137, "ShrubberyCreationForm")
{
	if (!target.empty())
		this->target = target;
	else
		throw NotValid();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &t) : Form(145, 137, "ShrubberyCreationForm")
{
	*this = t;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &t)
{
	if (this != &t)
		this->target = t.target;
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->target;
}
static std::string getAsciiTree()
{
	std::string asci = "      _-_      \n"
					   "   /~~   ~\\   \n"
					   " /~~         ~~\\ \n"
					   "{               }\n"
					   " \\  _-     -_  / \n"
					   "   ~  \\\\ //  ~  \n"
					   "_- -   | | _- _\n"
					   "  _ -  | |   -_\n  "
					   "    // \\\\      ";
	return asci;
}

void ShrubberyCreationForm::action() const
{
	std::ofstream myfile;
	myfile.open(this->getTarget() + "_shrubbery");
	if (myfile.is_open())
	{

		myfile << getAsciiTree();
		myfile.close();
	}
}

const char *ShrubberyCreationForm::NotValid::what() const throw()
{
	return "target can not be empty.";
}