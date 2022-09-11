/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:52:24 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/11 21:37:28 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

void Contact::printErrorMessage(std::string str, std::string msg)
{
	if(str.empty()) // check fiels is not empty if empty return error message and contunie
		PRINT << "\x1B[31m"<< msg << " is required ! try again" << "\x1B[0m"<< std::endl;
}

int main(void)
{
	Contact contacts;
	PhoneBook phone;
	
	std::string line;
	while (std::getline(std::cin, line)) 
		{
			// PRINT << "typed commond type :" ;
			if(line == "ADD")
			{
			PRINT << "firstname :" ;
			std::getline(std::cin,line); // input for firstname 
			contacts.setFirstName(line); // add  first name
			if (line.empty()) // check line is empty
				continue;
			PRINT << "lastname :" ;
			std::getline(std::cin,line); // input for lastname 
			contacts.setLastName(line); // add  last name
			if (line.empty()) // check line is empty
				continue;
			PRINT << "nickname :" ;
			std::getline(std::cin,line); // input for nickname 
			contacts.setNickName(line); // add  nick name
			if (line.empty()) // check line is empty
				continue;
			PRINT << "phone number :" ;
			std::getline(std::cin,line); // input for nember phone 
			contacts.setPhone(line); // add  phone number
			if (line.empty() || contacts.getPhone().empty()) // check line is empty
				continue ;
			PRINT << "secret darkest :" ;
			std::getline(std::cin,line); // input for secret 
			contacts.setSecret(line); // add  secret code
			if (line.empty()) // check line is empty
				continue;
			//if not empty all feild add new contact in list
			phone.addContact(contacts.getFirstName(),  contacts.getLastName(), contacts.getNickName(), contacts.getPhone(),contacts.getSecret());
			PRINT << "\x1B[32m"<< "Succefully add new Contact :" << contacts.getNickName() << "\x1B[0m"<< std::endl;
			
			}
			if(line == "SEARCH")
				phone.getContact();// search all  contact 
			if (line == "EXIT") // if user typed EXIT exiting  program 
				break;
		}
	
	
		
}