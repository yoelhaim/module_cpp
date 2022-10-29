/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:53:24 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 15:52:32 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default Contractur called ! \n";
	this->name = "";
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
	std::cout << "FragTrap copy assignment  Contractur called ! \n";
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
	std::cout << "FragTrap  destractur called ! \n";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap  conatractur called ! \n";
	this->name = name;
	this->hit = 100;
	this->energy_point = 50;
	this->attack_damage = 30;
}

void highFivesGuys(void){
	std::cout << "high Fives Guys\n";
}