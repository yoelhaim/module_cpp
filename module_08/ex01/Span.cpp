/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:04:36 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 22:49:28 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span::Span() : N(0)
{
}

Span::Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span::~Span()
{
}

Span::Span(Span const &t)
{
	*this = t;
}
Span &Span::operator=(Span const &t)
{
	if (this != &t)
	{
		this->N = t.N;
		this->span = t.span;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (this->N <= this->span.size())
		throw std::out_of_range("the span is full !");
	this->span.push_back(n);
}

int Span::shortestSpan()
{
	if (N <= 1)
		throw std::out_of_range("the number is not valid");
	std::vector<int> tmp = this->span;
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::iterator it = tmp.begin();

	int temp = std::abs((*(it + 1)) - *it);

	for (it = tmp.begin(); it < tmp.end(); it++)
	{
		if (std::abs((*(it + 1)) - *it) < temp)
			temp = std::abs((*(it + 1)) - *it);
	}
	return (temp);
}
int Span::longestSpan()
{
	if (N <= 1)
		throw std::out_of_range("the number is not valid");
	std::vector<int> tmp = this->span;
	std::sort(tmp.begin(), tmp.end());

	return (tmp.back() - tmp.front());
}
