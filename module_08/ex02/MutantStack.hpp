/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:50:11 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/15 13:34:06 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <stack>
template <class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
private:
	/* data */
public:
	MutantStack()
	{
	}
	~MutantStack()
	{
	}
	T begin()
	{
		return 1;
	}
	T end()
	{
		return 1;
	}
};

///   <----  containers ----->
///   stack  first in first out (fifo)
///   vector dynamic (malloc)
///   list  linked list
///    deque  (lifo)
////    map (tree)
