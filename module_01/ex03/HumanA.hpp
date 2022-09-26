/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:51 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/22 23:45:57 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#define STR std::string
#include "Weapon.hpp"
class HumanA
{
private:
	STR name;
	Weapon &weopen;
public:
	HumanA(STR name, Weapon &weopen);
	~HumanA();
	void attack();
};