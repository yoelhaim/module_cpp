#pragma once

#include <iostream>
#include <cstring>
#include "Contact.hpp"
#define PRINT std::cout 

class PhoneBook
{
	private :
		Contact contacts[8];
	public :
		void addContact(STR firstName, STR lastName, STR nickName, STR phoneNumber, STR darksetSecret);
		void getContact(int id);

};