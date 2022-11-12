/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:01:39 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 01:26:05 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
int main()
{
	Data _data = {25};
	// Data _data2 = {25};
	Data *ptr = deserialize(serialize(&_data));
	std::cout << ptr << std::endl;
	std::cout << &_data << std::endl;
	std::cout << "diff between Serialization & address => " << (ptr == &_data ? "not diff" : "diff") << std::endl;
	std::cout << "age is => " << _data.age << std::endl;
}