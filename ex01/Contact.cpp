/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:06:18 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/21 16:26:50 by bkaras-g         ###   ########.fr       */
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

void	Contact::print_contact_info()
{
	std::cout << "first name: " << this->_first_name;
	std::cout << '\n';
	std::cout << "last name: " << this->_last_name;
	std::cout << '\n';
	std::cout << "nickname: " << this->_nickname;
	std::cout << '\n';
	std::cout << "phone number: " << this->_phone_number;
	std::cout << '\n';
	std::cout << "darkest secret: " << this->_darkest_secret;
	std::cout << std::endl;
}
