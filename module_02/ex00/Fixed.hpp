/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:17:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 21:05:43 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int number;
	static int bits;

public:
	Fixed();
	Fixed(const Fixed &t);
	Fixed &operator=(const Fixed &t);
	~Fixed();
	int getRawBits();
	void setRawBits(int const raw);
};
