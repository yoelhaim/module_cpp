/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:47:44 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 09:46:08 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Fixed
{
private:
	static const int bits = 8;
	int number;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	int toInt(void) const;
	float toFloat(void) const;
	~Fixed();
	Fixed &operator=(const Fixed &t);
	
	Fixed & operator++();
	Fixed & operator--();
	Fixed  operator++(int);
	Fixed  operator--(int);
	Fixed(const Fixed & fixed_p);
	int getRawBits(void) const ;
	void setRawBits(int const raw);
	static  Fixed  &max(Fixed &a, Fixed &b)  ;
	static const Fixed  &max(Fixed  const &a, Fixed const  &b) ;
	static  Fixed  &min(Fixed &a, Fixed &b)  ;
	static const Fixed  &min(Fixed  const &a, Fixed const  &b) ;
	// 
	Fixed operator*(const Fixed &t);
	bool operator<(const Fixed &t);
	Fixed operator+(const Fixed &t);
	Fixed operator-(const Fixed &t);
	Fixed operator/(const Fixed &t);
	//
	bool	operator>(const Fixed &t);
	bool	operator>=(const Fixed &t);
	bool	operator<=(const Fixed &t);
	bool	operator==(const Fixed &t);
	bool	operator!=(const Fixed &t);
};
std::ostream &operator<<(std::ostream &output, Fixed const &n);

