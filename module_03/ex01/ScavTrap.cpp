/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:52:42 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 14:33:31 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


 ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default Constarctur called ! \n";
	this->name = "";
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}
 ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constractor called \n";
	this->name = name;
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}

 ScavTrap::~ ScavTrap()
{
	std::cout << "ScavTrap destractur called !\n";
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
	
	if (this->energy_point > 0 && this->hit > 0)
	{
	 	std::cout<<"ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
	else
		std::cout << "no attaks\n";
}
