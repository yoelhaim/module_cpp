#pragma once

#include <iostream>
#include <cstring>
#define PRINT std::cout
#define STR std::string 

class Contact
{
	private:
		STR firstName;
		STR lastName;
		STR phoneNumber;
		STR darksetSecret;
		STR nickName;
	public:
		Contact();
		Contact(STR firstName, STR lastName, STR nickName, STR phoneNumber, STR darksetSecret);
		// first Name
		STR getFirstName();
		void setFirstName(STR firstName);
		// last Name
		STR getLastName();
		void setLastName(STR lastName);
		// phone number
		STR getPhone();
		void setPhone(STR phoneNumber);
		// nick Name
		STR getNickName();
		void setNickName(STR nickName);
		// codesecret
		STR getSecret();
		void setSecret(STR darksetSecret);
		void printErrorMessage(STR str, STR msg);
};