/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pro <pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:33:52 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/13 00:39:27 by pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	std::cout << "Default Constructor called ! \n";
	n = 0;
	array = new T[n];
}
template <typename T>
Array<T>::~Array()
{
	delete[] array;
	std::cout << "Destructor called ! \n";
}
template <typename T>
Array<T>::Array(Array const &rhs)
{
	std::cout << "copy  constructor called ! \n";
	this->n = rhs.n;
	this->array = new T[rhs.size()];
	for (size_t i = 0; i < this->n; i++)
		this->array[i] = rhs.array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
	std::cout << "copy assignment  operator called ! \n";
	this->n = rhs.n;
	delete[] this->array;
	this->array = new T[rhs.size()];
	for (size_t i = 0; i < this->n; i++)
		this->array[i] = rhs.array[i];
	return *this;
}

template <typename T>
Array<T>::Array(unsigned int size)
{
	std::cout << "parametreze Constructor called ! \n";
	n = size;
	array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		array[i] = 0;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->n)
		throw std::out_of_range("index out of range !");
	return array[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->n)
		throw std::out_of_range("index out of range !");
	return array[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->n;
}
