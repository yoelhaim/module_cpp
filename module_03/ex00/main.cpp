/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/03 19:36:28 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main()
{
	ClapTrap clap("clap");
	ClapTrap clop("s");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");

	clap.attack("clop");
	clap.setName("bo3o");

	clap.beRepaired(2);
	clap.beRepaired(100);
	clap.takeDamage(clop.getdamage());
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");

	std::cout << "---------------------\n";

	int n = 100;
	clop.beRepaired(90);
	for (int i = 0; i < n; i++)
	{
		clop.attack("me");
	}

	return 0;
}