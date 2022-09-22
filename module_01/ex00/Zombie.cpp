/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:54:15 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/16 12:28:03 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(STR name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	PRINT << this->name << " has been destroy \n";
}
void Zombie::announce( void )
{
	PRINT << this->name <<": BraiiiiiiinnnzzzZ...\n";
}