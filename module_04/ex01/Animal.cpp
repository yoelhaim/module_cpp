/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:17 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 13:22:58 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal default constructor called ! \n";
}


Animal::Animal(const Animal &t)
{
	std::cout << "Aminal copy constructor called !" << std::endl;
	*this = t;
}
Animal & Animal::operator=(const Animal &t)
{
	std::cout << "Animal copy assignment  operator called !" << std::endl;
	if (this != &t)
		this->type = "Animal";
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called ! \n";
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal make sound"<< std::endl;
}
