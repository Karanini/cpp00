/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:05:43 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/21 11:28:51 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	PhoneBook::add_user()
{
	Contact	new_contact;

	new_contact.create_new_contact();
	this->_contacts[0] = new_contact;

	std::cout << "first name=" << this->_contacts[0]._first_name;
	std::cout << '\n';
	std::cout << this->_contacts[0]._last_name;
	std::cout << '\n';
	std::cout << this->_contacts[0]._nickname;
	std::cout << '\n';
	std::cout << this->_contacts[0]._phone_number;
	std::cout << '\n';
	std::cout << this->_contacts[0]._darkest_secret;
}
