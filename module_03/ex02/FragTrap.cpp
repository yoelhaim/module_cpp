/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:53:24 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/02 19:27:06 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called ! \n";
	this->name = "none";
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 30;
}

FragTrap:: FragTrap(const FragTrap &t)
{
	*this= t;
}
FragTrap  &FragTrap::operator=(const FragTrap &t)
{
	std::cout << "FragTrap copy assignment  constructor called ! \n";
	if (this != &t)
	{
		this->hit = t.hit;
		this->name = t.name;
		this->energy_point = t.energy_point;
		this->attack_damage = t.attack_damage;
	}
	return (*this);
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap  Destructor called ! \n";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap  constructor called ! \n";
	this->name = name;
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 30;
}

void highFivesGuys(void){
	std::cout << "high Fives Guys\n";
}
void FragTrap::attack(const std::string &target)
{
	if (this->energy_point <= 0 || this->hit <= 0)
		std::cout << "FragTrap " << this->name << " is a dead" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
}