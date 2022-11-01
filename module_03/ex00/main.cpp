/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 10:38:58 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
int main()
{
	ClapTrap clap("clap");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.takeDamage(8);
	clap.attack("heho");
	clap.takeDamage(1);
	clap.beRepaired(2);
	clap.takeDamage(1);
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	


	
}