/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:26:45 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/11 20:29:27 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Contact.hpp"
#define PRINT std::cout 

class PhoneBook
{
	private :
		Contact contacts[8];
		int		numberOfContact;
	public :
		PhoneBook();
		void addContact(STR firstName, STR lastName, STR nickName, STR phoneNumber, STR darksetSecret);
		void getContact();
		void searchContact(int id, int type);
		

};