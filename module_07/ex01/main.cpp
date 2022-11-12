/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:25:14 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 18:24:23 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
public:
	Awesome(void) : _n(42) {}
	int get(void) const
	{
		return this->_n;
	}

private:
	int _n;
};

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

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
	Awesome array1[5];
	iter(array, 5, print);
	iter(array1, 5, print);
	// std::cout << "array of int : \n";
	// ::iter(array, 5, fun);
	// std::string arr[] = {"iter",
	// 					 "1337",
	// 					 "42",
	// 					 "leet"};
	// std::cout << "array of string : \n";
	// ::iter(arr, 4, funS);

	return 0;
}