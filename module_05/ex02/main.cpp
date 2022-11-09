/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:17:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 19:21:16 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{

		RobotomyRequestForm sh("3a9d");
		Bureaucrat b("l9ayd", 46);
		Bureaucrat b22("m9adem", 30);
		sh.beSigned(b);
		b22.executeForm(sh);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}