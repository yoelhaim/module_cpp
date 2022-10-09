/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:23:36 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/09 22:03:11 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int number)
{
	this->number = number << this->bits;
}

Fixed::Fixed(const float number)
{
	// this->number = roundf(number * pow(2, this->bits));
	this->number = (int)number;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &t)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = t.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &t)
{
	std::cout << "Copy assignment operator " << std::endl;
	this->number = t.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &outpot, const Fixed &t)
{
	outpot << t.toFloat();
	return outpot;
}

float Fixed::toFloat(void) const
{
	return ((float)this->getRawBits());
}

int Fixed::toInt(void) const
{
	std::cout << "sss  ";
	return (this->getRawBits());
}

int Fixed::getRawBits() const
{
	return (this->number);
}