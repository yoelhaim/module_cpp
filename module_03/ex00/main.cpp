/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 13:31:18 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
int main()
{
	ClapTrap clap("clap");
	ClapTrap c (clap);
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.takeDamage(10);
	clap.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.beRepaired(10);
	c.takeDamage(10);

	
}