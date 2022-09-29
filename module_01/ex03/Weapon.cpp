/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:55:45 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/26 15:07:39 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(STR type)
{
	this->setType(type);
}
Weapon::~Weapon()
{
}
STR& Weapon::getType()
{
	return (this->type);
}
void Weapon::setType(STR type)
{
	this->type = type;
}