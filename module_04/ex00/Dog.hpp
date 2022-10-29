/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:04 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 17:52:26 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "Animal.hpp"
class Dog : public Animal
{
private:
	/* data */
public:
	Dog();
	~Dog();
	void makeSound();
};

