/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:38:45 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/06 12:44:36 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor Called !"<< std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destruct Called !"<< std::endl;
}


Brain::Brain (const Brain &t){
	*this = t;
	
}
Brain &Brain::operator= (const Brain &t){
	if (this != &t)
		for(int i = 0; i < 100; i++)
			this->ideas[i] = t.ideas[i];
	return (*this);
	
}