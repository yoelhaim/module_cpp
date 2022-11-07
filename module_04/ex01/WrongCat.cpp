/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 11:49:22 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default contructor called ! \n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called ! \n";
}
WrongCat::WrongCat(WrongCat const &t){
	std::cout << "WrongCat copy Contructor called ! \n";
	*this = t;
}
WrongCat &WrongCat::operator=(WrongCat const &t)
{
	std::cout << "WrongCat copy assignmanent operator called ! \n";
	if (this != &t)
		this->type = t.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat make Meow,Meow"<< std::endl;
}
