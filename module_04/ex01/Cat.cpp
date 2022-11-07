/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/06 20:48:42 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "cat default contructor called ! \n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat destructor called ! \n";
}

Cat::Cat(const Cat &t){
	std::cout << "Cat copy constructor called !" << std::endl;
	brain = new Brain();
	*this = t;
}
Cat &Cat::operator=(const Cat &t){
	std::cout << "Cat copy assignment operator called !" << std::endl;
	if (this != &t)
	{
		type = t.type;
		*brain = *t.brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat make Meow,Meow"<< std::endl;
}
