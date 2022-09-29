/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:55:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 18:44:23 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int n = 1;
	Zombie *zombie = zombieHorde(n, "foo");/// alloceted
	for (int i = 0; i < n; i++)
	{
		zombie[i].announce(); // printed
	}
	
	
	delete[] zombie; // free
	return 0;
}