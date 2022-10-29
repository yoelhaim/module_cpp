/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:52:13 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 14:29:08 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class  ScavTrap  : public ClapTrap
{
public:
	 ScavTrap();
	 ScavTrap(std::string name);
	~ ScavTrap();
	ScavTrap(const ScavTrap &t);
	ScavTrap & operator=(const ScavTrap &t);
	void guardGate();
	void attack(const std::string &target);
};

