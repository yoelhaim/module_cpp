/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:44:01 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/10 22:02:14 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

ch
void checkArg(std::string str)
{
	std::cout << str << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	std::string str = av[1];
	checkArg(str);
}