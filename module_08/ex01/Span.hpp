/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:02:42 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/13 23:21:04 by yoelhaim         ###   ########.fr       */
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
	unsigned int N;

public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(Span const &t);
	Span &operator=(Span const &t);
	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
};
