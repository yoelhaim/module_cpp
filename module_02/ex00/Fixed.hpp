/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:17:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/09 20:34:43 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int number;
	static const int bits =8;

public:
	Fixed();
	Fixed(const Fixed &t);
	Fixed &operator=(const Fixed &t);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
};
