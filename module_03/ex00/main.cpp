/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 20:35:42 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
int main()
{
	ClapTrap clap("clap");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	clap.takeDamage(8);
	clap.attack("clop");
	clap.takeDamage(1);
	clap.beRepaired(2);
	clap.takeDamage(1);
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	return 0;	
}