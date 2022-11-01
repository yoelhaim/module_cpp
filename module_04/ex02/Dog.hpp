/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:04 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 13:47:26 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
	Brain *brain;

public:
	 Dog();
	~Dog();
	Dog(const Dog &t);
	Dog &operator=(const Dog &t);
	void makeSound() const;
};
