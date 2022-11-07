/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:59:08 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/03 19:39:11 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
//  <============ Default Constructor ===========>
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called \n";
	this->name = "none";
	this->hit = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}
//  <============ Parametres Constructor ===========>
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called \n";
	this->name = name;
	this->hit = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
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
		amount > this->hit ? this->hit = 0 : this->hit -= amount;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point > 0 && this->hit > 0)
	{
		std::cout << "ClapTrap " << this->name << " repaired hit " << amount << std::endl;
		this->hit += amount;
		this->energy_point--;
	}
	else
		std::cout << "ClapTrap There is no energy\n";
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy_point <= 0 || this->hit <= 0)
		std::cout << "Claptrap " << this->name << " is a dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_point--;
	}
}

//<========= setter ==========>
void ClapTrap::setEnergy(unsigned int energy)
{
	this->energy_point = energy;
}
void ClapTrap::setdamage(unsigned int damage)
{
	this->attack_damage = damage;
}
void ClapTrap::sethit(unsigned int hit)
{
	this->hit = hit;
}
void ClapTrap::setName(std::string name)
{
	this->name = name;
}
//<========= getter ==========>
unsigned int ClapTrap::getEnergy(void) const
{
	return this->energy_point;
}
unsigned int ClapTrap::getdamage(void) const
{
	return this->attack_damage;
}
unsigned int ClapTrap::gethit(void) const
{
	return this->hit;
}
std::string ClapTrap::getName(void) const
{
	return this->name;
}