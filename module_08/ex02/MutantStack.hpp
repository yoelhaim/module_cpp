/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:50:11 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 22:38:46 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <stack>
template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

public:
	typedef typename Container::iterator iterator;
	MutantStack() {}

	~MutantStack()
	{
		this->c.clear();
	}

	MutantStack(MutantStack const &t)
	{
		*this = t;
	}
	MutantStack &operator=(MutantStack const &t)
	{
		if (this != &t)
			this->c = t.c;
		return *this;
	}
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

///   <----  containers ----->
///   stack  first in first out (fifo)
///   vector dynamic (malloc)
///   list  linked list
///    deque  (lifo)
////    map (tree)
