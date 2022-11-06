/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:46:08 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/10/29 18:10:47 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
	
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &t);
	WrongAnimal & operator=(const WrongAnimal &t);
	~WrongAnimal();
	void makeSound() const;
	std::string getType() const;
};

