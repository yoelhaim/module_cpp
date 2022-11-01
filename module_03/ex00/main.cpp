/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/30 17:05:48 by yoelhaim         ###   ########.fr       */
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
	clap.takeDamage(10);
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	clap.attack("heho");
	


	
}