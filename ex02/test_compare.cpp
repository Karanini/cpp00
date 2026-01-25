/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_compare.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:55:10 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/25 12:00:55 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_compare.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	Compare c1;
	Compare c2;

	c1.num = 32;
	c2.num = 32;
	if (c1.num == c2.num)
		std::cout << "they are equal\n";
	return (0);
}
