/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:28:04 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/13 13:38:04 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> arr;
		arr.push_back(1);
		arr.push_back(5);
		arr.push_back(3);
		arr.push_back(4);
		int res = easyfind(arr, 4);
		std::cout << "found : " << res << std::endl;
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
		// std::cout << arr2.size() << std::endl;
		// arr2.clear();
		// std::cout << "Max Element = "
		// 	  << *max_element(arr2.begin(), arr2.end()) << std::endl;
		int res = easyfind(arr2, rand() % 150);
		std::cout << "found : " << res << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}