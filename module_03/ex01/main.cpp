/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/03 19:39:52 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	ScavTrap a("scav");
	a.attack("scava");
	ClapTrap c("rolf");
	c.attack("zombie");
	c = a;
	c.takeDamage(10);
	c.attack("zombie");
	c.attack("zombie");
	a.attack("scava");
	a.attack("scava");
	a.beRepaired(1);
	a.guardGate();
	a.setName("hahahahahahahahaahahhahahahaha");

	for(int i = 0; i < 100; i++)
	{
		std::cout << (i + 1) << " ==>" ;
		a.attack("scava");
	}
	c.attack("zombie");
}