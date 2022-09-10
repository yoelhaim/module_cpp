/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:52:24 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/10 21:15:04 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::printErrorMessage(std::string str, std::string msg)
{
	if(str.empty())
		PRINT << msg << " is required ! try again" << std::endl;
}

int main(void)
{
	Contact contacts;
	std::string line;

	
	while (std::getline(std::cin, line))
		{
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
			if (line.empty()) // check line is empty
				continue;
			PRINT << "secret darkest :" ;
			std::getline(std::cin,line); // input for secret 
			contacts.setSecret(line); // add  secret code
			if (line.empty()) // check line is empty
				continue;
			PRINT << "Succefully add new Contact :" << contacts.getNickName() << std::endl;
			
			}
			if (line == "EXIT")
				break;
				PRINT <<"---------------\n" << contacts.getFirstName()<< std::endl;
				PRINT << contacts.getLastName()<< std::endl;
				PRINT << contacts.getPhone()<< std::endl;
				PRINT << contacts.getNickName()<< std::endl;
				PRINT << contacts.getSecret()<< std::endl;
				PRINT <<"---------------\n";
			
		}
		// PRINT << contacts.getFirstName();
		
}