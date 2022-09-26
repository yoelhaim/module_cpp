/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:25:41 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/23 03:33:02 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(void)
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "• The memory address of the string variable  " << &str << std::endl;
	std::cout << "• The memory address held by stringPTR.      " << &stringPTR << std::endl;
	std::cout << "• The memory address held by stringREF.      " << &stringREF << std::endl;
	std::cout << "--------\n";
	std::cout << "• The value of the string variable.  " << str << std::endl;
	std::cout << "• The value pointed to by stringPTR.   " << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF. " << stringREF << std::endl;
}