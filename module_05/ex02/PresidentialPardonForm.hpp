/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:27:59 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/11/09 19:18:33 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"
class PresidentialPardonForm : public Form
{
private:
	std::string target;

public:
	PresidentialPardonForm(std::string target = "");
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &t);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &t);
	void addActon() const;
	std::string getTarget() const;
	class NotValid : public std::exception
	{
	public:
		const char *what() const throw();
	};
};
