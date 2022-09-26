/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:56:49 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/23 00:09:34 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(STR name, Weapon &weopen):weopen(weopen)
{
	this->name = name;
}

HumanA::~HumanA()
{
}
void HumanA::attack()
{
	std::cout << this->name << " attak " <<  this->weopen.getType() << std::endl;
}