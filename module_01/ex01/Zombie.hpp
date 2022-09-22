/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:50:39 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/16 23:18:57 by yoelhaim         ###   ########.fr       */
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
	Zombie();
	Zombie(STR name);
	~Zombie();
	void setName(STR name);
	STR getName();
	void announce( void ); 
};
Zombie* zombieHorde( int N, std::string name );
