/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:23:36 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 20:28:46 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called"<< std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}
Fixed::Fixed(const Fixed& t)
{
	(void) t;
	// this->getRawBits();
	std::cout << "Copy constructor called" << std::endl;
	this->getRawBits();
}

Fixed& Fixed::operator=(const Fixed& t)
{
	(void) t;
	this->number = 0;
	std::cout << "Copy assignment operator " << std::endl;
	this->getRawBits();
	return *this;
}
int Fixed::getRawBits()
{
	this->number = 0;
	std::cout <<"getRawBits member function called" << std::endl;
	return(this->number);
}