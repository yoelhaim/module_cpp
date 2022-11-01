/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 10:43:24 by yoelhaim         ###   ########.fr       */
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
	c.attack("heeeeee");
	c.attack("heeeeee");
	a.attack("heeeeee");
	a.attack("heeeeee");
	a.beRepaired(1);

	
}