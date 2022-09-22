/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:55:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/16 23:17:03 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = zombieHorde(10, "foo");/// alloceted
	for (size_t i = 0; i < 10; i++)
	{
		zombie[i].announce(); // printed
	}
	
	
	delete[] zombie; // free
}