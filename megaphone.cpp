/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:05:29 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/20 15:21:39 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_upper_case(int nb_to_print, char *av[])
{
	int	i = 1;
	int	j = 0;

	while (i <= nb_to_print)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] -= 32;
			j++;
		}
		std::cout << av[i];
		i++;
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
