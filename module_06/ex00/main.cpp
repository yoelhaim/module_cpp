/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:44:01 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/12 16:33:06 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

bool checkDouble(std::string str)
{
	int _isFloat = 0;
	for (size_t i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == '.')
			_isFloat++;
		if ((!std::isdigit(str[i]) && (_isFloat != 1 && str[i] == '.')) || (!std::isdigit(str[i]) && (str[i] != '.')))
			return false;
	}
	return true;
}
int checkInt(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return 0;
	}

	return (1);
}

std::string checkMore(std::string str)
{
	bool _is_double = false;
	if (checkInt(str))
		return "int";
	_is_double = checkDouble(str);
	if (_is_double)
	{
		if (strchr(str.c_str(), '.') && (str[str.length() - 1] == 'f' || str[str.length() - 1] == 'F'))
			return "float";
		else if (std::isdigit(str[str.length() - 1]))
			return "double";
	}
	return "impossible";
}

std::string checkChar(std::string str)
{
	if (str.length() == 1)
	{
		if (isdigit(str[0]))
			return "int";
		else
			return "char";
	}
	return checkMore(str);
}

void checkprintable(std::string str, std::string type, int number)
{
	if (str == type)
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	if (type == "char")
	{
		std::cout << "char: '" << static_cast<char>(str[0]) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "flaot: " << static_cast<float>(str[0]) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
		return;
	}
	int num = atoi(str.c_str());
	if ((num >= 0 && num < 32) || (num >= 127) || number < 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(atoi(str.c_str())) << "'" << std::endl;
}

void printValue(std::string str, std::string type)
{
	int number = static_cast<int>(atoi(str.c_str()));
	checkprintable(str, type, number);

	if (type != "char")
	{
		if (number == -1)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(atoi(str.c_str())) << std::endl;
		float _isFloat = static_cast<double>(strtof(str.c_str(), NULL));
		std::cout << "flaot: " << _isFloat;
		!isinf(_isFloat) ? std::cout << "f" : std::cout << "f";
		std::cout << std::endl;
		std::cout << "double: " << strtod(str.c_str(), NULL);
	}
}

void checkArg(std::string arg)
{
	std::cout << std::fixed;
	std::cout.precision(1);
	std::string str;
	if (arg[0] == '+' || arg[0] == '-')
		str = &arg[1];
	else
		str = arg;
	std::string type = arg;
	if (arg == "nan" || arg == "-inff" || arg == "+inff" || arg == "nanf" || arg == "+inf" || arg == "-inf")
	{
		printValue(arg, type);
		return;
	}
	type = checkChar(str);
	if (type == "int" && str.length() == 1)
		printValue(arg, type);
	else if (type == "int" && str.length() != 1)
		printValue(arg, type);
	else if (type == "char")
		printValue(arg, type);

	else if (type == "float")
		printValue(arg, type);

	else if (type == "double")
		printValue(arg, type);
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "flaot: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "arg not valid ...use ===> [./convert 88.99f]\n";
		return 0;
	}

	std::string str = av[1];
	checkArg(str);
}