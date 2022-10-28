/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:26:28 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/26 13:49:04 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called\n"; 
}
// int constractur
Fixed::Fixed::Fixed(int n)
{
	std::cout << "Int constructor called\n"; 
	this->number = (n * (1 << this->bits));
}
// float constractur
Fixed::Fixed::Fixed(float n)
{
	float r = n *(1<<this->bits);
	this->number = (int)roundf(r);
	std::cout << "Float constructor called\n"; 
}

Fixed::Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &fixed_p)
{
	std::cout << "Copy constructor called\n"; 
	*this = fixed_p;
	// this->number = fixed_p.getRawBits();
}
Fixed &Fixed::operator=(const Fixed &t)
{
	std::cout << "Copy assignment operator called\n"; 
	if (this != &t)
		this->number = t.getRawBits();
	return (*this);
}
int Fixed::getRawBits(void) const 
{
	return(this->number);
}
//outpot stream
std::ostream &operator<<(std::ostream& output , Fixed const & n)
{
	output << n.toFloat();
	return output;
}
// function tofloat toint
int Fixed::toInt(void) const
{
	return this->getRawBits() / (1 << this->bits) ;
}
float Fixed::toFloat(void) const
{
	return((float)this->getRawBits()/ (1<<this->bits));
}