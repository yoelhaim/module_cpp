/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:54 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/22 23:57:32 by yoelhaim         ###   ########.fr       */
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
	std::cout << this->name << "  attak " << this->weopen->getType() <<std::endl;
}
void HumanB::setWeapon(Weapon &weapon){
	this->weopen = &weapon;
}