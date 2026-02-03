/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:12:58 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/03 14:00:37 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main()
{
	Contact	new_contact;
	PhoneBook	phonebook(0);
	std::string	user_input;

	while (true)
	{
		std::cout << "Hi! Welcome to the super Phone Book app! What do you want do to today ?\n";
		std::getline(std::cin, user_input); //instead of std::cin >> user_input; to be able to catch an empty line
		if (std::cin.eof())
		{
			std::cout << "\nExiting due to Ctrl+D..." << std::endl;
			break;
		}
		if (user_input.empty())
		{
			std::cout << "Empty input — please type 'ADD', 'SEARCH' or 'EXIT'.\n";
			continue;
		}
		if (!user_input.compare("ADD"))
		{
			phonebook.add_user();
		}
		else if (!user_input.compare("SEARCH"))
		{
			phonebook.search();
		}
		else if (!user_input.compare("EXIT"))
		{
			std::cout << "KTHXBYYYYYYEEEE\n";
			break;
		}
		else
			std::cout << "Sorry I understand only when you say 'ADD', 'SEARCH' or 'EXIT'. Try again!\n";
	}
	return (0);
}
