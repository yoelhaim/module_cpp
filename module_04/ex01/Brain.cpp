/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:38:45 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 13:51:02 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}


Brain::Brain (const Brain &t){
	*this = t;
	
}
Brain &Brain::operator= (const Brain &t){
	// if (this != &t)
	// 	this->ideas = t.ideas;
	(void )t;
	return (*this);
	
}