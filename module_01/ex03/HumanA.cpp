/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:49 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 18:40:02 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(STR name, Weapon &weopen):weopen(weopen)
{
	this->name = name;
}

HumanA::~HumanA()
{
}
void HumanA::attack()
{
	std::cout <<  "\x1B[36m"<< this->name <<  "\x1B[0m"<< " attacks with their " <<  "\x1B[31m"<< this->weopen.getType() <<  "\x1B[0m"<< std::endl;
}