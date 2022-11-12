/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:42:09 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 01:29:47 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main()
{
	Base base;

	Base *p = base.generate();
	std::cout << "Pointeur : ";
	base.identify(p);
	std::cout << "Reference : ";
	base.identify(*p);
	delete p;
	return 0;
}