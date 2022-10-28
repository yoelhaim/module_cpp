/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:26:28 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/27 21:11:29 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed(const Fixed & fixed_p)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_p;
}
Fixed &Fixed::operator=(const Fixed &t)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = t.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->number);
}