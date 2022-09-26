/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:27:50 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/24 21:54:26 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

std::string searchAndReplace(std::string strs, std::string s1, std::string s2)
{
	size_t i;
	while ((i = strs.find(s1)) != std::string::npos)
	{
		strs = strs.substr(0, i) + s2 + strs.substr(i + s1.length(), -1); // -1 max size_t = 65535
	}

	return strs;
}

int main(int ac, char **av)
{
	(void)av;
	if (ac != 4)
		return (std::cout << "error arg \n", 0);

	std::string content;
	std::ifstream readFile(av[1]);
	try
	{
		if (readFile.is_open())
		{
			std::getline(readFile, content, '\0');
		}
		if (readFile.fail())
			throw("error open file");
	}
	catch (const char *e)
	{
		std::cout << e << '\n';
		return (0);
	}
	content = searchAndReplace(content, av[2], av[3]);
	try
	{
		std::string remplace;
		remplace = ".remplace";
		std::ofstream Myfile(av[1] + remplace);
		if (Myfile.fail())
			throw("error create file");
		Myfile << content;
		Myfile.close();
	}
	catch (const char *err)
	{
		std::cout << err;
	}
	readFile.close();
}