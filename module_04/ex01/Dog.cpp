/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:52 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/06 20:49:51 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "dog default constractur called ! \n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "dog Destructor called ! \n";
}

Dog::Dog(const Dog &t){
	std::cout << "dog copy constructor called !" << std::endl;
	brain = new Brain();
	*this = t;
}
Dog &Dog::operator=(const Dog &t){
	std::cout << "dog copy assignment operator !" << std::endl;
	if (this != &t)
	{
		type = t.type;
		*brain = *t.brain;
	}
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "Dog make Woof Woof"<< std::endl;
}
