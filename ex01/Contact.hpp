/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:54:36 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/20 17:08:39 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	int			phone_number;
	std::string	darkest_secret;
public:
	void add_user();
};

#endif
