/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:54:15 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 18:44:12 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie()
{
}

Zombie::Zombie(STR name)
{
	this->name = name;
}

void Zombie::setName(STR name)
{
	this->name = name;
}
STR Zombie::getName()
{
	return this->name;
}
Zombie::~Zombie()
{
	PRINT << this->name << " has been destroy \n";
}
void Zombie::announce( void )
{
	PRINT << this->name <<": BraiiiiiiinnnzzzZ...\n";
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
	}
	
	return (zombie);
}