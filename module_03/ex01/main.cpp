/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 20:38:02 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	ScavTrap a("scav");
	ScavTrap c("rolf");
	a.attack("scava");
	
	c.takeDamage(10);
	c.attack("scava");
	c.attack("scava");
	a.attack("scava");
	a.attack("scava");
	a.beRepaired(1);
	ClapTrap b("clap");
	b.attack("cloop");

	
}