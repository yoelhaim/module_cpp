#pragma once

#include <iostream>
#include <cstring>
#define PRINT std::cout 

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string phoneNumber;
		std::string darksetSecret;
		std::string nickName;
	public:
		// first Name
		std::string getFirstName();
		void setFirstName(std::string firstName);
		// last Name
		std::string getLastName();
		void setLastName(std::string lastName);
		// phone number
		std::string getPhone();
		void setPhone(std::string phoneNumber);
		// nick Name
		std::string getNickName();
		void setNickName(std::string nickName);
		// codesecret
		std::string getSecret();
		void setSecret(std::string darksetSecret);
		void printErrorMessage(std::string str, std::string msg);
};