/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:05:43 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/21 16:26:38 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(int i)
{
	this->_i = i;
}

void	PhoneBook::add_user()
{
	Contact	new_contact;

	new_contact.create_new_contact();
	if (new_contact.is_not_valid_entry())
	{
		std::cout << "One or more empty fields detected. Try again" << std::endl;
	}
	if (this->_i == 8)
		this->_i = 0;
	this->_contacts[this->_i] = new_contact;
	// this->_contacts[this->_i].print_contact_info();
	this->_i++;
}

void	PhoneBook::search()
{
	int	num_contacts;

	// if (this->_i)
	num_contacts = this->_i;
	while (num_contacts > 0)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << num_contacts - 1;
		this->_contacts[num_contacts - 1].display_for_search();
		num_contacts--;
	}
}
