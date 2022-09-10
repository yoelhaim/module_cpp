#include "Phonebook.hpp"
#include "Contact.hpp"


void PhoneBook::addContact(STR firstName, STR lastName, STR nickName, STR phoneNumber, STR darksetSecret)
{
	static int id = 0;
	Contact contact(firstName,lastName, nickName, phoneNumber , darksetSecret);
	this->contacts[id++] = contact;
	if (id == 8)
		id = 0;

}

void PhoneBook::getContact(int id)
{
	if (id < 0 && id > 8)
	{
		PRINT << "out in of the range\n";
		return ;
	}
	for (size_t i = 0; i < 8; i++)
	{
	Contact contact = this->contacts[i];

	PRINT << ">>>>>"  << i << " => ";PRINT << contact.getFirstName() << std::endl;
	}

}