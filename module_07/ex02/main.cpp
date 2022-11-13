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
	const Array<int> testCobst;
	std::cout << testCobst[0];

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

	// try
	// {
	// 	std::vector<int> cc;
	// 	for (int i = 0; i < MAX_VAL; i++)
	// 	{
	// 		cc.push_back(rand());
	// 	}

	// 	for (int i = 0; i < MAX_VAL; i++)
	// 	{
	// 		numbers[i] = cc[i];
	// 	}
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << " vector\n";
	// }
	delete[] mirror; //
	// Array<char> chara(10);
	// for (int i = 0; i < 10; i++)
	// {
	// 	chara[i] = 'a';
	// }
	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << chara[i] << std::endl;
	// }
	return 0;
}
