/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:26:56 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/09/11 21:27:52 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// first name
STR Contact::getFirstName()
{
	return this->firstName;
}

void Contact::setFirstName(STR firstName)
{
	printErrorMessage(firstName, "firstname");
	this->firstName = firstName;
}

// last name
STR Contact::getLastName()
{
	return this->lastName;
}
Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darksetSecret = "";

}
Contact::Contact(STR firstName, STR lastName, STR nickName, STR phoneNumber, STR darksetSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darksetSecret = darksetSecret;

}

void Contact::setLastName(STR lastName)
{
	printErrorMessage(lastName, "lastname");
	this->lastName = lastName;
}

// phone nbr
STR Contact::getPhone()
{
	return this->phoneNumber;
}

int checkValidPhone(STR phoneNumber)
{
	if (phoneNumber.length() < 5)
	{
		PRINT <<"\x1B[31m"<< "oops number phone is short\n" << "\x1B[0m";
		return (0);	
	}
	else if (phoneNumber.length() > 13)
	{
		PRINT<< "\x1B[31m" << "oops number phone is long\n" << "\x1B[0m";
		return (0);
	}
	for (int i ; phoneNumber[i]; i++)
	{
		if(isalpha(phoneNumber[i]))
		{
			PRINT<<"\x1B[31m"<< "ooops number not valid !\n"<< "\x1B[0m";
			return (0);
		}
	}
 return (1);
	
}

void Contact::setPhone(STR phoneNumber)
{
	
	if (!checkValidPhone(phoneNumber))
	{
		phoneNumber = "";
		printErrorMessage(phoneNumber, "phone number");
		this->phoneNumber = phoneNumber;
	}
	else
		this->phoneNumber = phoneNumber;
}

// nickname
STR Contact::getNickName()
{
	return this->nickName;
}

void Contact::setNickName(STR nickName)
{
	printErrorMessage(nickName, "nickname");
	this->nickName = nickName;
}

// secet
STR Contact::getSecret()
{
	return this->darksetSecret;
}

void Contact::setSecret(STR darksetSecret)
{
	printErrorMessage(darksetSecret, "secret code");
	this->darksetSecret = darksetSecret;
}
