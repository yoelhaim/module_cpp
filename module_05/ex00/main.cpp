/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:17:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 16:55:21 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Bureaucrat", 100);

		//   a.setGrade(2);
		try
		{
			a.increment();
			std::cout << a << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		a.setGrade(149);
		try
		{
			a.decrement();
			std::cout << a << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			a.setGrade(151);
			std::cout << a << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}