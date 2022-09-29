/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:36:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/29 21:54:54 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{

	Harl harl;
	std::cout << "DEBUG : \n";
	harl.complain("debug");
	std::cout << "INFO : \n";
	harl.complain("info");
	std::cout << "WARNING : \n";
	harl.complain("warning");
	std::cout << "ERROR : \n";
	harl.complain("error");
	
}