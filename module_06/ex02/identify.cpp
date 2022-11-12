/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:42:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 01:29:13 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base::~Base()
{
	std::cout << "Destructor Called \n";
}
Base *Base::generate()
{
	Base *base;
	srand(time(NULL));
	int _rand = rand() % 3;
	switch (_rand)
	{
	case (0):
		base = new A;
		break;
	case (1):
		base = new B;
		break;
	case (2):
		base = new C;
		break;
	}
	return base;
}
void Base::identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "Type is A\n";
	if (b)
		std::cout << "Type is B\n";
	if (c)
		std::cout << "Type is C\n";
}

void Base::identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Type is A\n";
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Type is B\n";
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Type is C\n";
	}
	catch (const std::exception &e)
	{
	}
}