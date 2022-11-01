/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:59:08 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 11:05:25 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//  <============ Default Constructor ===========>
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called \n";
	this->name = "";
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}
//  <============ Parametres Constructor ===========>
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called \n";
	this->name = name;
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}
//  <============ copy Constructor ===========>
ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "ClapTrap copy constructor called !" << std::endl;
	*this = clap;
}
//  <============ copy Asignmant operator ===========>
ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "ClapTrap copy assignament operateur called !" << std::endl;
	if (this != &clap)
	{
		this->hit = clap.hit;
		this->name = clap.name;
		this->energy_point = clap.energy_point;
		this->attack_damage = clap.attack_damage;
	}
	return *this;
}
//  <============  Destructor ===========>
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit > 0 && this->energy_point > 0)
	{
		std::cout << "ClapTrap " << this->name << " lost hit " << amount << std::endl;
		this->hit -= amount;
		hit < 0? this->hit = 0 : this->hit; 
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point > 0 && this->hit > 0)
	{
		std::cout << "ClapTrap "<< this->name << " repaired hit " << amount <<  std::endl;
		this->hit += amount;
		this->energy_point--;
	}
	else
		std::cout << "ClapTrap canot energy\n";
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy_point > 0 && this->hit > 0)
	{
		
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
	else
		std::cout << "Claptrap " << this->name << " is a dead" << std::endl;
}
