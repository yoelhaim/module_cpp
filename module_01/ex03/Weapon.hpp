/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:55:55 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/22 23:44:43 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#define STR std::string

class Weapon
{
private:
	STR type;
public:
	Weapon(STR type);
	~Weapon();
	STR& getType();
	void setType(STR type);
	
};
