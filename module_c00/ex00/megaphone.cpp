/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:26:16 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/09 23:40:55 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac , char **av)
{
	if (ac > 1)
	{
		for (int i = 1;av[i]; i++)
		{
			for(int j = 0;av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]) ;
			if(av[i + 1])
				std::cout<< " "	;
		}	
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}