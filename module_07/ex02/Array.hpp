/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:24:57 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/13 20:45:32 by yoelhaim         ###   ########.fr       */
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
	Array()
	{
		n = 0;
		array = new T[n];
	}

	~Array()
	{
		if (this->array != NULL)
			delete[] array;
	}

	Array(Array const &rhs)
	{

		this->n = rhs.size();
		this->array = new T[rhs.size()];
		for (size_t i = 0; i < this->size(); i++)
			this->array[i] = rhs.array[i];
	}

	Array &operator=(Array const &rhs)
	{
		if (this->array != NULL)
			delete[] this->array;
		this->n = rhs.size();
		this->array = new T[rhs.size()];
		for (size_t i = 0; i < this->size(); i++)
			this->array[i] = rhs.array[i];
		return *this;
	}

	Array(unsigned int size)
	{
		n = size;
		array = new T[n];
		for (unsigned int i = 0; i < n; i++)
			array[i] = 0;
	}

	T &operator[](unsigned int i)
	{
		if (i >= this->size())
			throw std::out_of_range("index out of range !");
		return array[i];
	}

	const T &operator[](const unsigned int i) const
	{

		if (i >= this->n)
			throw std::out_of_range("index out of range !");
		return array[i];
	}

	unsigned int size() const
	{
		return this->n;
	}
};
