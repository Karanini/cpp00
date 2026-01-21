/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:06:18 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/21 11:28:51 by bkaras-g         ###   ########.fr       */
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

	// std::cout << "first name=" << this->_first_name;
	// std::cout << '\n';
	// std::cout << this->_last_name;
	// std::cout << '\n';
	// std::cout << this->_nickname;
	// std::cout << '\n';
	// std::cout << this->_phone_number;
	// std::cout << '\n';
	// std::cout << this->_darkest_secret;
}
