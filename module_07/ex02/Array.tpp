/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:33:52 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 20:53:02 by yoelhaim         ###   ########.fr       */
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
	std::cout << "Destructor called ! \n";
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
		throw Error();
	return array[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->n)
		throw Error();
	return array[i];
}

template <typename T>
unsigned int Array<T>::size()
{
	return this->n;
}
template <typename T>
const char *Array<T>::Error::what() const throw()
{
	return "index out of range !";
}