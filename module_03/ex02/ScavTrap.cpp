/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:52:42 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/02 19:27:12 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


 ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called ! \n";
	this->name = "none";
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}
 ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called \n";
	this->name = name;
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}

 ScavTrap::~ ScavTrap()
{
	std::cout << "ScavTrap destructor called !\n";
}
ScavTrap::ScavTrap(const ScavTrap &t)
{
	*this=  t;
}
ScavTrap & ScavTrap::operator=(const ScavTrap &t){
	
	if (this != &t)
	{
	this->hit = t.hit;
	this->name = t.name;
	this->energy_point = t.energy_point;
	this->attack_damage = t.attack_damage;
	}
	return *this;
}


void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy_point <= 0 || this->hit <= 0)
		std::cout << "ScavTrap " << this->name << " is a dead" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
}
