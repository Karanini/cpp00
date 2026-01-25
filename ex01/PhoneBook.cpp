/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:05:43 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/25 11:32:37 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(int i)
{
	this->_i = i;
	this->_num_contacts = 0;
}

void	PhoneBook::add_user()
{
	Contact	new_contact;

	new_contact.create_new_contact();
	while (new_contact.is_not_valid_entry())
	{
		std::cout << "One or more empty fields detected. Try again" << std::endl;
		new_contact.create_new_contact();
	}
	if (this->_i == 8)
		this->_i = 0;
	this->_contacts[this->_i] = new_contact;
	this->_i++;
	if (this->_num_contacts < 8)
		this->_num_contacts++;
}

void	PhoneBook::search()
{
	int	idx;
	std::string	user_input;

	if (this->_num_contacts == 0)
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	idx = 0;
	while (idx < this->_num_contacts)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << idx << '|';
		this->_contacts[idx].display_for_search();
		idx++;
	}
	std::cout << "\nChoose an index to display contact details:\n";
	std::cin >> user_input;
	std::cin.ignore(INT_MAX, '\n'); //flush the buffer until a '\n' is found
	idx = user_input[0] - '0';
	if (user_input.size() != 1 || idx < 0 || idx >= this->_num_contacts)
	{
		std::cout << "Index not recognized. Back to main menu." << std::endl;
		return ;
	}
	else
		this->_contacts[idx].print_contact_info();
}
