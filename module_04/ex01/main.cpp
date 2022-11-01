/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:47:03 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/01 14:09:19 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{	
	int num = 10;
	Animal *s[num];
	
	for (int i = 0; i < num; i++)
		 i % 2 ==0 ? s[i] = new Dog() : s[i] = new Cat();
		 
	for (int i = 0; i < num; i++)
		 std::cout << s[i]->getType() << std::endl;
		 
	for (int i = 0; i < num; i++)
		delete s[i];
	return (0);
}