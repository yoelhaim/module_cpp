/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:56:42 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 13:19:20 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat &t);
	Cat &operator=(const Cat &t);
	void makeSound() const;
};

