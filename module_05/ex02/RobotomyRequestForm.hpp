/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:28:13 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 19:18:46 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
private:
	std::string target;

public:
	RobotomyRequestForm(std::string target = "");
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &t);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &t);
	void addActon() const;
	std::string getTarget() const;
	class NotValid : public std::exception
	{
	public:
		const char *what() const throw();
	};
};
