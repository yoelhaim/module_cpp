/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:23:36 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/09 20:36:48 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called" << std::endl;
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
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}