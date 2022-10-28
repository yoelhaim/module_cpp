/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:47:44 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/27 21:03:42 by yoelhaim         ###   ########.fr       */
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
	Fixed(int n);
	Fixed(float n);
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
std::ostream &operator<<(std::ostream& shift , Fixed const & n) ;

