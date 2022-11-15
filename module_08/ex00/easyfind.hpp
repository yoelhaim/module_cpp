/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:28:22 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:53 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

template <typename T>
int easyfind(T &val, int n)
{
	typename T::iterator iter;
	iter = std::find(val.begin(), val.end(), n);
	if (iter == val.end())
		throw std::out_of_range(std::to_string(n) + " don't found !");

	return (*iter);
}
