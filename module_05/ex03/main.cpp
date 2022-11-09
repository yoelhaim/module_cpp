/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:17:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 19:22:10 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		// Form *shre = new PresidentialPardonForm();
		// Bureaucrat b("matef", 1);
		// shre->beSigned(b);
		// b.executeForm(*shre);
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}