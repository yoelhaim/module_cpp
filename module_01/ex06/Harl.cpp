/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:37:10 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 21:53:37 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "\x1B[34m"
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			  << "\x1B[0m" << std::endl;
}
void Harl::info()
{
	std::cout << "\x1B[36m"
			  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << "\x1B[0m" << std::endl;
}
void Harl::warning()
{
	std::cout << "\x1B[33m"
			  << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
			  << "\x1B[0m" << std::endl;
}
void Harl::error()
{
	std::cout << "\x1B[31m"
			  << "This is unacceptable! I want to speak to the manager now."
			  << "\x1B[0m" << std::endl;
}
void Harl::complain(std::string level)
{
	typedef void (Harl::*FuncPtr)();
	FuncPtr lvl[4] = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string thisStr[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (thisStr[i] == level)
		{
			switch (i)
			{
			case 0:
				(this->*lvl[0])();
			case 1:
				(this->*lvl[1])();
			case 2:
				(this->*lvl[2])();
			case 3:
				{(this->*lvl[3])();
				return;}
			default:
				break;
			}
		}
	}
	std::cout << "not found );" << level << std::endl;
}