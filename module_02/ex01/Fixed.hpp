/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:17:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/09 21:53:14 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int number;
	static const int bits = 8;

public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &t);
	Fixed &operator=(const Fixed &t);
	~Fixed();
	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits() const;
};

std::ostream &operator<<(std::ostream &outpot, const Fixed &t);