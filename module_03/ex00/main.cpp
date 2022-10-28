/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:18 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/23 09:42:49 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
int main()
{
	ClapTrap clap("hjhj");
	clap.takeDamage(10);
	clap.beRepaired(10);
	clap.attack("heho");
}