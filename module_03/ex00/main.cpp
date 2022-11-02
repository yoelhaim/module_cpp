/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/02 12:00:46 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
int main()
{
	ClapTrap clap("clap");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");

	clap.attack("clop");
	
	clap.beRepaired(2);
	
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");
	clap.attack("clop");

	return 0;	
}