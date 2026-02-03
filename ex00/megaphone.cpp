/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:05:29 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/03 10:46:25 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_upper_case(int nb_to_print, char *av[])
{
	std::string	str;

	for (int i = 1; i <= nb_to_print; i++)
	{
		str = av[i];
		for (long unsigned int j = 0; j < str.size(); j++)
			str[j] = std::toupper(str[j]);
		std::cout << str;
	}
	std::cout << std::endl;
}

int	main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (ac > 1)
		print_upper_case(ac - 1, av);
	return (0);
}
