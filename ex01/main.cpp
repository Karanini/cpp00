/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:12:58 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/20 17:24:57 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int	main()
{
	Contact	new_contact;

	std::string	user_input;
	std::cout << "Hi! Welcome to the super Phone Book app! What do you want do to today ?\n";
	std::cin >> user_input;
	if (!user_input.compare("ADD"))
	{
		new_contact.add_user();
	}
}
