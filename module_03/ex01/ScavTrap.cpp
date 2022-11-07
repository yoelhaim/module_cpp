/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:52:42 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/03 20:46:34 by yoelhaim         ###   ########.fr       */
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
	std::cout << "ScavTrap Destructor called !\n";
}
ScavTrap::ScavTrap(const ScavTrap &t)
{
	std::cout << "ScavTrap copy constructor called !" << std::endl;
	*this=  t;
}
ScavTrap & ScavTrap::operator=(const ScavTrap &t){
	std::cout << "ScavTrap copy assignament operateur called !" << std::endl;
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
	std::cout << "ScavTrap  "<< this->name <<" is now in Gate keeper mode\n";
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
