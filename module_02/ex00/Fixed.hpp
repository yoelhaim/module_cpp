/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:47:44 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/25 16:26:22 by yoelhaim         ###   ########.fr       */
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
	~Fixed();
	Fixed &operator=(const Fixed &t);
	Fixed(const Fixed & fixed_p);
	int getRawBits(void) const ;
};

