/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:47:44 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/30 21:26:55 by yoelhaim         ###   ########.fr       */
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
	Fixed(const int n);// constarctur call  if is int
	Fixed(const float n);// constractur call if is float
	int toInt(void) const;
	float toFloat(void) const;
	~Fixed();// destractur
	Fixed &operator=(const Fixed &t);// copy constarctur assignment operator
	Fixed(const Fixed & fixed_p); // copy constractur
	int getRawBits(void) const ;
	void setRawBits(int const raw);
};
std::ostream &operator<<(std::ostream& shift , Fixed const & n) ;

