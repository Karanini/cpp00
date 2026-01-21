/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:06:18 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/21 11:05:26 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::create_new_contact()
{
	std::cout << "Enter first name:\n";
    std::getline(std::cin, this->first_name);
    std::cout << "Enter last name:\n";
    std::getline(std::cin, this->last_name);
    std::cout << "Enter nickname:\n";
    std::getline(std::cin, this->nickname);
    std::cout << "Enter phone number:\n";
    std::getline(std::cin, this->phone_number);
    std::cout << "What is your contact's DARKEST secret ?\n";
	std::getline(std::cin, this->darkest_secret);

	// std::cout << "first name=" << this->first_name;
	// std::cout << '\n';
	// std::cout << this->last_name;
	// std::cout << '\n';
	// std::cout << this->nickname;
	// std::cout << '\n';
	// std::cout << this->phone_number;
	// std::cout << '\n';
	// std::cout << this->darkest_secret;
}
