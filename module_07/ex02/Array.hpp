/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:24:57 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/13 00:27:49 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <iostream>
template <typename T>
class Array
{
private:
	T *array;
	unsigned int n;

public:
	Array();
	Array(unsigned int size);
	~Array();
	Array(Array const &rhs);
	Array &operator=(Array const &rhs);
	T &operator[](unsigned int i);
	const T &operator[](unsigned int i) const;
	unsigned int size() const;
};
#include "Array.tpp"