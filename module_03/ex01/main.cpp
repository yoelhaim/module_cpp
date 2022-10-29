/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 14:41:50 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	ScavTrap a("youssef");
	ScavTrap c("you");
	a.attack("you");
	
	c.takeDamage(10);
	// ClapTrap b("matef");
	// b.attack("amiski");
	
	c.attack("heeeeee");
	c.attack("heeeeee");
	a.attack("heeeeee");
	a.attack("heeeeee");
	a.beRepaired(1);
	
	//a.takeDamage(10);
	// ClapTrap clap("clap");
	// ClapTrap c (clap);
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.attack("heho");
	// clap.takeDamage(10);
	// clap.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.beRepaired(10);
	// c.takeDamage(10);

	
}