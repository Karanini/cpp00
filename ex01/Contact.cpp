/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:06:18 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/21 18:03:37 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::create_new_contact()
{
	std::cout << "Enter first name:\n";
    std::getline(std::cin, this->_first_name);
    std::cout << "Enter last name:\n";
    std::getline(std::cin, this->_last_name);
    std::cout << "Enter _nickname:\n";
    std::getline(std::cin, this->_nickname);
    std::cout << "Enter phone number:\n";
    std::getline(std::cin, this->_phone_number);
    std::cout << "What is your contact's DARKEST secret ?\n";
	std::getline(std::cin, this->_darkest_secret);
}

int		Contact::is_not_valid_entry()
{
	if (!this->_first_name.compare("") || !this->_last_name.compare("")
		|| !this->_nickname.compare("") || !this->_phone_number.compare("")
		|| !this->_darkest_secret.compare(""))
		return (1);
	return (0);
}
/*
* displays first name, last name and nickname of a contact on a single
* line, according to the format required by the subject
*
* be careful of the pipe it's NOT INCLUDED in the 10 chars limit but setw
* might take it into account
*/
void	Contact::display_for_search()
{
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << this->truncate_if_necessary(this->_first_name) << '|';
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << this->truncate_if_necessary(this->_last_name) << '|';
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << this->truncate_if_necessary(this->_nickname) << std::endl;
}

std::string	Contact::truncate_if_necessary(std::string field)
{
	if (field.size() > 10)
	{
		field.resize(9);
		field.push_back('.');
	}
	return (field);
}

/*
* prints contact details, one line per field, once the user entered
* the contact's index in stdin
*/
void	Contact::print_contact_info()
{
	std::cout << '\n';
	std::cout << "first name: " << this->_first_name;
	std::cout << '\n';
	std::cout << "last name: " << this->_last_name;
	std::cout << '\n';
	std::cout << "nickname: " << this->_nickname;
	std::cout << '\n';
	std::cout << "phone number: " << this->_phone_number;
	std::cout << '\n';
	std::cout << "darkest secret: " << this->_darkest_secret;
	std::cout << '\n';
	std::cout << std::endl;
}
