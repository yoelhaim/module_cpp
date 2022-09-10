#include "Contact.hpp"

// first name
std::string Contact::getFirstName()
{
	return this->firstName;
}

void Contact::setFirstName(std::string firstName)
{
	printErrorMessage(firstName, "firstname");
	this->firstName = firstName;
}

// last name
std::string Contact::getLastName()
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
void Contact::setLastName(std::string lastName)
{
	printErrorMessage(lastName, "lastname");
	this->lastName = lastName;
}

// phone nbr
std::string Contact::getPhone()
{
	return this->phoneNumber;
}

void Contact::setPhone(std::string phoneNumber)
{
	printErrorMessage(phoneNumber, "phone number");
	this->phoneNumber = phoneNumber;
}

// nickname
std::string Contact::getNickName()
{
	return this->nickName;
}

void Contact::setNickName(std::string nickName)
{
	printErrorMessage(nickName, "nickname");
	this->nickName = nickName;
}

// secet
std::string Contact::getSecret()
{
	return this->darksetSecret;
}

void Contact::setSecret(std::string darksetSecret)
{
	printErrorMessage(darksetSecret, "secret code");
	this->darksetSecret = darksetSecret;
}
