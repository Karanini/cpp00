/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:12:58 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/20 17:41:27 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main()
{
	Contact	new_contact;
	std::string	user_input;

	while (true)
	{
		std::cout << "Hi! Welcome to the super Phone Book app! What do you want do to today ?\n";
		std::cin >> user_input;
		if (!user_input.compare("ADD"))
		{
			new_contact.add_user();
		}
		else if (!user_input.compare("SEARCH"))
		{
			std::cout << "Search mode activated.\n";
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
