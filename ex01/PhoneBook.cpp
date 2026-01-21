/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:05:43 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/21 18:02:29 by bkaras-g         ###   ########.fr       */
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
	std::string	user_input;

	if (this->_i == 0)
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	num_contacts = 0;
	while (num_contacts < this->_i)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << num_contacts << '|';
		this->_contacts[num_contacts].display_for_search();
		num_contacts++;
	}
	std::cout << "\nChoose an index to display contact details:\n";
	std::cin >> user_input;
	std::cin.ignore(INT_MAX, '\n');
	num_contacts = user_input[0] - '0';
	if (user_input.size() != 1 || num_contacts < 0 || num_contacts >= this->_i)
	{
		std::cout << "Index not recognized. Back to main menu." << std::endl;
		return ;
	}
	else
		this->_contacts[num_contacts].print_contact_info();
}
