/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:59:08 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 14:43:07 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap default constractor called \n";
	this->name = "";
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "claptrap constractor called \n";
	this->name = name;
	this->hit = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout <<"clapTrap copy constarctur called !"<< std::endl;
	*this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout <<"clapTrap copy assignament operateur called !"<< std::endl;
	if (this != &clap)
	{
		this->hit = clap.hit;
		this->name = clap.name;
		this->energy_point = clap.energy_point;
		this->attack_damage = clap.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "clapTrap Destractur called\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->energy_point -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point > 0 && this->hit > 0)
	{
		this->hit += amount;
	    this->energy_point--;
	}
	else
		std::cout << "canot energy\n";
}

void ClapTrap::attack(const std::string &target)
{
	
	if (this->energy_point > 0 && this->hit > 0)
	{
	 	std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
	else
		std::cout << "dead\n";
}
