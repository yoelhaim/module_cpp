/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:08 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/04 18:04:00 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class Animal
{
protected:
	std::string type;
	
public:
	Animal();
	Animal(const Animal &t);
	Animal & operator=(const Animal &t);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
};

