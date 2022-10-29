/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:52 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 17:58:41 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "dog default constractur called ! \n";
}

Dog::~Dog()
{
	std::cout << "dog destractur called ! \n";
}
void Dog::makeSound()
{
	std::cout << "Dog make how how"<< std::endl;
}
