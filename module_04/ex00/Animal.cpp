/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:17 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 18:10:34 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"



Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal default constractur called ! \n";
}


Animal::Animal(const Animal &t)
{
	std::cout << " dog copy constractur called !" << std::endl;
	*this = t;
}
Animal & Animal::operator=(const Animal &t)
{
	std::cout << "dog copy assignment  opertaor called !" << std::endl;
	if (this != &t)
	{
		this->type = "Animal";
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destractur called ! \n";
}

std::string Animal::getType()
{
	return (this->type);
}

void Animal::makeSound()
{
	std::cout << "Animal make sound"<< std::endl;
}
