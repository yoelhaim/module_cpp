/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:17 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 11:56:54 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called ! \n";
}


WrongAnimal::WrongAnimal(const WrongAnimal &t)
{
	std::cout << "Animal copy constructor called !" << std::endl;
	*this = t;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &t)
{
	std::cout << "Animal copy assignment  operator called !" << std::endl;
	if (this != &t)
		this->type = "WrongAnimal";
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called ! \n";
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make sound"<< std::endl;
}
