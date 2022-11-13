/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:28:22 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/13 13:34:22 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

template <typename T>
int easyfind(T &val, int val2)
{
	typename T::iterator it;
	it = std::find(val.begin(), val.end(), val2);
	if (it == val.end())
		throw std::out_of_range("don't found !");

		return (std::distance(val.begin(), it));
}
