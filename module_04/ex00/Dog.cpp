/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:52 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 13:28:57 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "dog default constractur called ! \n";
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "dog Destructor called ! \n";
}

Dog::Dog(const Dog &t){
	std::cout << "dog copy constructor called !" << std::endl;
	*this = t;
}
Dog &Dog::operator=(const Dog &t){
	std::cout << "dog copy assignment operator !" << std::endl;
	if (this != &t)
		this->type = t.type;
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "Dog make Woof Woof"<< std::endl;
}
