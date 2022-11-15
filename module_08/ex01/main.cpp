/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:54:20 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 13:06:46 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAXN 10000

int main()
{
	try
	{
		Span sp = Span(10);

		sp.addNumber(6);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(14);
		Span sp2(sp);
		// std::cout << sp2.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		srand(time(NULL));
		Span longs = Span(MAXN);
		for (int i = 0; i < MAXN; i++)
		{
			int r = rand();
			longs.addNumber(r);
		}

		std::cout << longs.shortestSpan() << std::endl;
		std::cout << longs.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}