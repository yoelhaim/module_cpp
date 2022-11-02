/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:18:41 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/02 10:26:24 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("shjshs")
{
	this->grade = 1;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName()
{
	return this->name;
}
int Bureaucrat::getGrade()
{
	return this->grade;
}
void Bureaucrat::increment(){
	this->grade--;
}
void Bureaucrat::decrement(){
	this->grade++;
}