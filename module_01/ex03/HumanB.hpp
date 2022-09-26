/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:56 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/22 23:54:24 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define STR std::string
#include "Weapon.hpp"

class HumanB
{
private:
	STR name;
	Weapon *weopen;
public:
	HumanB(STR name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};
