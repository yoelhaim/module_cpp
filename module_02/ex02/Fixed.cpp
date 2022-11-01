/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:26:28 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 09:49:42 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed::Fixed()
{
	this->number = 0;
}
// int constractur
Fixed::Fixed::Fixed(const int n)
{
	this->number = n << this->bits;
}
// float constractur
Fixed::Fixed::Fixed(const float n)
{
	float r = n * (1 << this->bits);
	this->number = (int)roundf(r);
}

Fixed::Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed_p)
{
	*this = fixed_p;
}
Fixed &Fixed::operator=(const Fixed &t)
{
	if (this != &t)
		this->number = t.getRawBits();
	return (*this);
}
///  arithmetic operators
Fixed Fixed::operator*(const Fixed &t)
{
	return (Fixed(this->toFloat() * t.toFloat()));
}

Fixed Fixed::operator+(const Fixed &t)
{
	return (Fixed(this->toFloat() + t.toFloat()));
}
Fixed Fixed::operator-(const Fixed &t)
{
	return (Fixed(this->toFloat() - t.toFloat()));
}
Fixed Fixed::operator/(const Fixed &t)
{
	return (Fixed(this->toFloat() / t.toFloat()));
}

///  comparison operators

bool Fixed::operator>(const Fixed &t)
{
	return (this->getRawBits() > t.getRawBits());
}

bool Fixed::operator<(const Fixed &t)
{
	return (this->getRawBits() < t.getRawBits());
}

bool Fixed::operator<=(const Fixed &t)
{
	return (this->getRawBits() <= t.getRawBits());
}
bool Fixed::operator>=(const Fixed &t)
{
	return (this->getRawBits() >= t.getRawBits());
}
bool Fixed::operator==(const Fixed &t)
{
	return (this->getRawBits() == t.getRawBits());
}
bool Fixed::operator!=(const Fixed &t)
{
	return (this->getRawBits() != t.getRawBits());
}

//increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement

Fixed &Fixed::operator++()
{
	this->number++;
	return (*this);
}
Fixed &Fixed::operator--()
{
	this->number--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->number++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->number--;
	return (tmp);
}
// function min
 Fixed &Fixed::min(Fixed& a, Fixed &b)
{
	return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed  &Fixed::min(Fixed const  &a, Fixed const  &b) 
{
	return a.getRawBits() < b.getRawBits() ? a : b;
}
// function max
 Fixed &Fixed::max(Fixed& a, Fixed &b)
{
	return a.getRawBits() > b.getRawBits() ? a : b;
}

const Fixed  &Fixed::max(Fixed const  &a, Fixed const  &b) 
{
	return a.getRawBits() > b.getRawBits() ? a : b;
}
int Fixed::getRawBits(void) const
{
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw ;
}

// outpot stream
std::ostream &operator<<(std::ostream &output, Fixed const &n)
{
	output << n.toFloat();
	return output;
}

// function tofloat toint
int Fixed::toInt(void) const
{
	return this->getRawBits() >> this->bits;
}

float Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (1 << this->bits));
}