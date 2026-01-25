/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_perso.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:38:23 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/01/25 17:04:16 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int main(void)
{
	Account	Bob = Account(32);
	Account	Michel = Account(4000);

	Account::displayAccountsInfos();
	Bob.makeDeposit(5);
	Bob.makeWithdrawal(8);
	Bob.makeWithdrawal(29);
	Bob.makeWithdrawal(1);
}
