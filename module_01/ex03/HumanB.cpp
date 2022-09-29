/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:54 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 18:40:26 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(STR name)
{
	this->name = name;
	this->weopen = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (weopen)
		std::cout <<  "\x1B[33m"<< this->name <<  "\x1B[0m"<< " attacks with their " <<  "\x1B[34m"<< this->weopen->getType() <<  "\x1B[0m"<< std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{		
	this->weopen = &weapon;
}