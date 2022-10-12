/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:23:36 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/12 09:34:15 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


int calcPow(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
		result*= a;
	return (result);
}


Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called"<< std::endl;
	this->number = number << this->bits;// 10 << 8 == 2560
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called"<< std::endl;
	this->number = number *  256;
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
	std::cout << "Copy assignment operator called " << std::endl;
	this->number = t.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &outpot, const Fixed &t)
{
	outpot << t.toFloat();
	return outpot;
}

float Fixed::toFloat(void) const
{
	return ((int)this->getRawBits() / 256);
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->bits);
}

int Fixed::getRawBits() const
{
	return (this->number);
}