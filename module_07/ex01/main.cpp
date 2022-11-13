/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:25:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/13 20:42:05 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void fun(int const &i)
{
	std::cout << i << std::endl;
}
void funS(std::string const &str)
{
	std::cout << "\"" << str << "\"" << std::endl;
}

int main()
{
	int array[] = {
		0,
		1,
		2,
		3,
		4,
	};

	std::cout << "array of int : \n";
	::iter(array, 5, fun);
	std::string arr[] = {"iter",
						 "1337",
						 "42",
						 "leet"};
	std::cout << "array of string : \n";
	::iter(arr, 4, funS);

	return 0;
}