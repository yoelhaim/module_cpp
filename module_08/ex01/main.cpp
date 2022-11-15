/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:54:20 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 22:50:23 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAXN 10000

int main()
{
	std::cout << "---------------test 1---------------\n";
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(1);
		sp.addNumber(17);
		sp.addNumber(21);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(14);
		Span sp2(sp);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------test 2---------------\n";
	try
	{
		std::vector<int> test_v;
		int r = 1;
		for (int i = 0; i < MAXN; i++)
		{
			r += 5;
			test_v.push_back(r);
		}
		Span test(MAXN);
		test.addNumber(test_v.begin(), test_v.end());

		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}