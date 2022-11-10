/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:17:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/10 16:47:01 by yoelhaim         ###   ########.fr       */
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

		ShrubberyCreationForm sh("home");
		Bureaucrat b("m9adem", 46);
		Bureaucrat b22("l9ayd", 30);
		sh.beSigned(b);
		b22.executeForm(sh);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}