/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:27:03 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/12 18:24:06 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	this->numberOfContact = 0;
}

void PhoneBook::addContact(STR firstName, STR lastName, STR nickName, STR phoneNumber, STR darksetSecret)
{
	static int id = 0;
	Contact contact = Contact(firstName,lastName, nickName, phoneNumber , darksetSecret);
	this->contacts[id++] = contact;
	if (this->numberOfContact < 8)
		this->numberOfContact++;
	if (id == 8)
		id = 0;
}
STR lenghtOfStr(STR str)
{
	if (str.length() > 10)
		return (str.substr(0, 10) +".");
	return (str);
}

void PhoneBook::searchContact(int id ,int type)
{
		if (id >= this->numberOfContact || id < 0)
	{
		PRINT << "out in of the range\n";
		return ;
	}
	Contact contact = this->contacts[id];
	if (type == 1) // get all contact sep  by |
	{
	PRINT << "id  | firstname  |  lastname  | nickname\n";
	PRINT  << id << "   | ";
	PRINT  << lenghtOfStr(contact.getFirstName()) << "|";
	PRINT  << lenghtOfStr(contact.getLastName()) << " |";
	PRINT  << lenghtOfStr(contact.getNickName()) << std::endl;
	}
	else // if you search by id 
	{	
	PRINT << "\x1B[33m"<< "-----------------------------\n"<< "\x1B[0m";
	PRINT << "\x1B[35m" <<"information : " << contact.getNickName() << "\x1B[0m\n\n";
	PRINT << "index        : " <<  id << std::endl;
	PRINT << "firstname    : " << contact.getFirstName() << std::endl;
	PRINT << "lastname     : " <<  contact.getLastName() << std::endl;
	PRINT << "nicktname    : " <<  contact.getNickName() << std::endl;
	PRINT << "phone number : " <<  contact.getPhone() << std::endl;
	PRINT << "code secret : " <<  contact.getSecret() << std::endl;
	PRINT << "\x1B[33m"<< "-----------------------------\n"<< "\x1B[0m";
	}
}

void PhoneBook::getContact()
{
	int  id;
	for (int i = 0; i < this->numberOfContact; i++)
		searchContact(i, 1);
	if (this->numberOfContact != 0)
	{
	PRINT << "typed id here : ";
	std::cin  >>  id;
	searchContact(id, 0);	
	}

}