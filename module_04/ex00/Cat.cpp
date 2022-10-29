/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 17:57:33 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "cat default constractur called ! \n";
}

Cat::~Cat()
{
	std::cout << "cat destrctur called ! \n";
}

void Cat::makeSound()
{
	std::cout << "Cat make moy"<< std::endl;
}
