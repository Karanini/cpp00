/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:54:36 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/25 11:32:17 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>

class	Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
public:
	void	create_new_contact();
	int		is_not_valid_entry() const;
	void	display_for_search();
	std::string	truncate_if_necessary(std::string field);
	void	print_contact_info() const;
};

#endif
