/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:28:04 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 20:07:03 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <map>

int main()
{
	try
	{
		std::vector<int> arr;
		arr.push_back(1);
		arr.push_back(5);
		arr.push_back(3);
		arr.push_back(44);
		int res = easyfind(arr, 3);
		std::cout << "found : " << res << std::endl;
		std::cout << easyfind(arr, 4) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		srand(time(NULL));
		std::vector<int> arr2;
		for (int i = 0; i < 100; i++)
		{
			arr2.push_back(i);
		}
		int res = easyfind(arr2, rand() % 150);
		std::cout << "vector found : " << res << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::array<int, 5> ar = {1, 3, 4, 5, 6};

		int res = easyfind(ar, 4);
		std::cout << "array found : " << res << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}