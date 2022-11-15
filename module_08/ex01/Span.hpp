/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:02:42 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 22:33:33 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
private:
	std::vector<int> span;
	unsigned int N;

public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(Span const &t);
	Span &operator=(Span const &t);
	void addNumber(int n);
	template <typename iter>
	void addNumber(iter first, iter last)
	{
		size_t _distance = std::distance(first, last);

		if ((_distance + this->span.size()) > this->N)
			throw std::out_of_range("the span is full !");
		this->span.insert(this->span.end(), first, last);
	}
	int shortestSpan();
	int longestSpan();
};
