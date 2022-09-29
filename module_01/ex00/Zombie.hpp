/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:50:39 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/27 15:58:03 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define STR std::string
#define PRINT std::cout

class Zombie
{
	private:
		STR name;

	public:
		Zombie(STR name);
		~Zombie();
		void announce(void);
};
Zombie *newZombie(STR name);
void randomChump(STR name);
