/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/03 19:42:39 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	ClapTrap a = ScavTrap("scav");
	a.attack("scav1");
	ScavTrap b;
	b.guardGate();
	b.attack("kiwalo");
	FragTrap   c = FragTrap("me");
	c.setdamage(5000);
	c.highFivesGuys();
	c.attack("five guys");
	std::cout << "FragTrap ==>  " << c.getdamage()<< std::endl;
	std::cout <<"ScavTrap ==>  " << b.getdamage()<< std::endl;
}