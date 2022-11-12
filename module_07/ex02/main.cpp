// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:24:27 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 17:04:38 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char **)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		if (i == 55)
			mirror[i] = value + 1;
		else
			mirror[i] = value;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		// std::cout << numbers[i] << std::endl;
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			// return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete[] mirror; //

	return 0;
}
// #include "Array.hpp"
// #include <iostream>

// int main()
// {

// 	Array<int> number(10);
// 	// int *a = new int(number);
// 	// int *a = new Array();
// 	// std::cout << *a << std::endl;
// 	srand(time(NULL));
// 	for (int i = 0; i < 10; i++)
// 	{
// 		number[i] = rand();
// 	}

// 	for (int i = 0; i < 10; i++)
// 	{
// 		std::cout << "number is=> " << number[3] << std::endl;
// 	}

// 	try
// 	{
// 		number[-100] = 1;
// 		std::cout << number[3] << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }