/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:02:39 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/01 14:47:48 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	Jean_Luc("Jean-Luc");
	Jean_Luc.attack("Fredo");
	Jean_Luc.takeDamage(0);
	Jean_Luc.beRepaired(10);

	ScavTrap	Patoche_junior("Patoche_junior");
	ScavTrap	Patoche("Patoche");
	Patoche_junior = Patoche;
	Patoche_junior.attack("Fredo");
	Patoche_junior.guardGate();

	FragTrap	Bernard("Bernard");
	Bernard.attack("Freddy");
	Bernard.highFivesGuys();
	return (0);
}