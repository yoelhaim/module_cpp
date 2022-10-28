/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:59:08 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/28 17:47:49 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
{
	std::cout << "default constractor called \n";
	this->name = "";
	this->hit = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "constractor called \n";
	this->name = name;
	this->hit = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->energy_point = -1;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	
	this->hit += amount;
	this->energy_point = -1;
}

void ClapTrap::attack(const std::string &target)
{
	this->energy_point = -1;
	if (this->energy_point > 0 || this->attack_damage > 0)
	 	std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "no attaks\n";
}

ClapTrap::~ClapTrap()
{
}
int main()
{
	float a;
}