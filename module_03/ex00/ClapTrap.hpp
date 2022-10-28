/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:58:25 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/28 17:03:18 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
private:
	unsigned int hit;
	unsigned int energy_point;
	unsigned int attack_damage;
	std::string name;

public:
	ClapTrap();
	ClapTrap(std::string name);
	// ClapTrap &ClapTrap(const ClapTrap &clap);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
