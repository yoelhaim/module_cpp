/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:28:30 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 19:17:59 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm(std::string target = "");
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &t);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &t);

	void addActon() const;
	std::string getTarget() const;
	class NotValid : public std::exception
	{
	public:
		const char *what() const throw();
	};
};
